#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "korean");
    _wsetlocale(LC_ALL, L"korean");

    int cho, jung, jong;
    unsigned char han[3];

    printf("초성: ");
    scanf_s("%d", &cho);

    printf("중성: ");
    scanf_s("%d", &jung);

    printf("종성: ");
    scanf_s("%d", &jong);
    /*
    가 = 0xB0A1
    나 = 0xB3AA
    */
    // KS5601 한글 조합식 계산
    han[0] = 0xB0 + (cho - 1);
    han[1] = 0xA1 + (jung - 1) * 94 + (jong - 1);

    printf("조합형 코드: 0x%02X%02X\n", han[0], han[1]);

    // 조합형 코드를 한글로 변환하여 출력
    printf("한글: %c%c\n", han[0], han[1]);

    return 0;
}
