// from server: 90% by colin
struct CDeclarationView {
    char pad[0xb0];
    int field_0xb0;
    void method_00436790(int);
    void method_00436db0(int, int*);
};

void CDeclarationView::method_00436db0(int a, int* b)
{
    int v = field_0xb0;
    if (v != 0) {
        method_00436790(*(int*)(a + 0x5c));
        *b = 0;
    } else {
        *b = 0;
    }
}
