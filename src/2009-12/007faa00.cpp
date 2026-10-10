// from server: 78% by atomic.potato
extern char* func_007f9610();
extern char* func_007f3c3e(char*);

struct CPatchedControlComboBox
{
    char* f();
};

char* CPatchedControlComboBox::f()
{
    return func_007f3c3e(*(char**)((char*)this + 0x178));
}
