// from server: 72% by colin
// roc 2007-08 0063a580  unit: CPatchedControlComboBox  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063a580
//
// 0063a580  e8dbf7ffff           call 0x639d60
// 0063a585  83785c00             cmp dword ptr [eax + 0x5c], 0
// 0063a589  b801000000           mov eax, 1
// 0063a58e  7503                 jne 0x63a593
// 0063a590  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0063a593  c3                   ret 

struct Inner
{
    char pad[0x5c];
    int field_5c;
};

struct Outer
{
    char pad[0x34];
    int field_34;
    Inner* getInner();
    int getValue();
};

int Outer::getValue()
{
    Inner* p = getInner();
    if (p->field_5c != 0)
        return 1;
    return field_34;
}
