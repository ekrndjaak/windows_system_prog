#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "korean");
    _wsetlocale(LC_ALL, L"korean");

    int cho, jung, jong;
    unsigned char han[3];

    printf("�ʼ�: ");
    scanf_s("%d", &cho);

    printf("�߼�: ");
    scanf_s("%d", &jung);

    printf("����: ");
    scanf_s("%d", &jong);
    /*
    �� = 0xB0A1
    �� = 0xB3AA
    */
    // KS5601 �ѱ� ���ս� ���
    han[0] = 0xB0 + (cho - 1);
    han[1] = 0xA1 + (jung - 1) * 94 + (jong - 1);

    printf("������ �ڵ�: 0x%02X%02X\n", han[0], han[1]);

    // ������ �ڵ带 �ѱ۷� ��ȯ�Ͽ� ���
    printf("�ѱ�: %c%c\n", han[0], han[1]);

    return 0;
}
