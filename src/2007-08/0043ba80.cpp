// from server: 95% by colin
// roc 2007-08 0043ba80  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0043ba80
//
// 0043ba80  56                   push esi
// 0043ba81  57                   push edi
// 0043ba82  8bf9                 mov edi, ecx
// 0043ba84  85ff                 test edi, edi
// 0043ba86  7408                 je 0x43ba90
// 0043ba88  8db714010000         lea esi, [edi + 0x114]
// 0043ba8e  eb02                 jmp 0x43ba92
// 0043ba90  33f6                 xor esi, esi
// 0043ba92  8b4608               mov eax, dword ptr [esi + 8]
// 0043ba95  85c0                 test eax, eax
// 0043ba97  7409                 je 0x43baa2
// 0043ba99  50                   push eax
// 0043ba9a  e8c3411f00           call 0x62fc62
// 0043ba9f  83c404               add esp, 4
// 0043baa2  8bcf                 mov ecx, edi
// 0043baa4  c7460800000000       mov dword ptr [esi + 8], 0
// 0043baab  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043bab2  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0043bab9  e892222600           call 0x69dd50
// 0043babe  f644240c01           test byte ptr [esp + 0xc], 1
// 0043bac3  7409                 je 0x43bace
// 0043bac5  57                   push edi
// 0043bac6  e897411f00           call 0x62fc62
// 0043bacb  83c404               add esp, 4
// 0043bace  8bc7                 mov eax, edi
// 0043bad0  5f                   pop edi
// 0043bad1  5e                   pop esi
// 0043bad2  c20400               ret 4

extern "C" void __cdecl func_0062fc62(void*);
extern "C" void __stdcall func_0069dd50();

struct XItem
{
    char pad0[0x114];
    void* ptr8;
    void* ptrC;
    void* ptr10;

    XItem* destroy(int flags);
};

XItem* XItem::destroy(int flags)
{
    XItem* self = this;
    char* base;
    if (self != 0)
        base = (char*)self + 0x114;
    else
        base = 0;

    void* p = *(void**)(base + 8);
    if (p != 0)
    {
        func_0062fc62(p);
    }

    *(void**)(base + 8) = 0;
    *(void**)(base + 0xc) = 0;
    *(void**)(base + 0x10) = 0;

    func_0069dd50();

    if (flags & 1)
    {
        func_0062fc62(self);
    }

    return self;
}
