// roc 2011-06 00443180  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00443180
//
// 00443180  8b542404             mov edx, dword ptr [esp + 4]
// 00443184  0fb612               movzx edx, byte ptr [edx]
// 00443187  8b01                 mov eax, dword ptr [ecx]
// 00443189  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0044318f  89542404             mov dword ptr [esp + 4], edx
// 00443193  ffe0                 jmp eax
// copied from an identical function in another client (function ?XItem@S@@QAEXPAE@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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