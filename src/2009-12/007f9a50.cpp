// from server: 68% by atomic.potato
extern "C" int __stdcall ImportedCall1(void);
extern "C" int __stdcall ImportedCall2(int);

struct CPatchedControlComboBox {
    int __cdecl f(int a1, int a2);
};

int CPatchedControlComboBox::f(int a1, int a2)
{
    int value = ImportedCall1();
    return ImportedCall2(value) == 0;
}
