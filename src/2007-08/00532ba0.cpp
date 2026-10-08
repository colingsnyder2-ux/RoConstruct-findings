// from server: 92% by colin
// roc 2007-08 00532ba0  unit: RBX::Selection  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00532ba0
//
// 00532ba0  8d442404             lea eax, [esp + 4]
// 00532ba4  50                   push eax
// 00532ba5  81c10c010000         add ecx, 0x10c
// 00532bab  e8c0140800           call 0x5b4070
// 00532bb0  c20400               ret 4

struct Selection {
    char pad[0x10c];
    void setSelection(const void*);
};

void Selection::setSelection(const void* value)
{
    extern void __stdcall sub_005b4070(void*, const void*);
    sub_005b4070((char*)this + 0x10c, &value);
}
