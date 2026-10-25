// from server: 100% by atomic.potato
// roc 2008-06 00437860  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437860
//
// 00437860  8b542404             mov edx, dword ptr [esp + 4]
// 00437864  0fb612               movzx edx, byte ptr [edx]
// 00437867  8b01                 mov eax, dword ptr [ecx]
// 00437869  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0043786f  89542404             mov dword ptr [esp + 4], edx
// 00437873  ffe0                 jmp eax

struct S
{
    int (**vtable)();

    void XItem(unsigned char *value);
};

void S::XItem(unsigned char *value)
{
    value = (unsigned char *)(*value);
    ((void (__thiscall *)(S *, unsigned char *))vtable[0x39])(this, value);
}
