// from server: 67% by colin
// roc 2007-08 006325e0  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006325e0
//
// 006325e0  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 006325e6  85c9                 test ecx, ecx
// 006325e8  7406                 je 0x6325f0
// 006325ea  83792000             cmp dword ptr [ecx + 0x20], 0
// 006325ee  7503                 jne 0x6325f3
// 006325f0  33c0                 xor eax, eax
// 006325f2  c3                   ret 
// 006325f3  6804e80000           push 0xe804
// 006325f8  e86de3ffff           call 0x63096a
// 006325fd  50                   push eax
// 006325fe  e8cd1a0700           call 0x6a40d0
// 00632603  50                   push eax
// 00632604  e8f9dbffff           call 0x630202
// 00632609  83c408               add esp, 8
// 0063260c  c3                   ret 

struct PAVCXTPCommandBarKeyboardTip_CArray
{
    int m();
};

extern "C" int __cdecl func_0063096a();
extern "C" int __cdecl func_006a40d0(int);
extern "C" int __cdecl func_00630202(int);

int PAVCXTPCommandBarKeyboardTip_CArray::m()
{
    int* p = *(int**)((char*)this + 0xa0);
    if (p != 0)
        return 0;
    if (p[8] == 0)
        return 0;
    func_00630202(func_006a40d0(func_0063096a()));
    return 0;
}
