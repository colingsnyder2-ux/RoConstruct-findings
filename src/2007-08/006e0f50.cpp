// from server: 90% by colin
// roc 2007-08 006e0f50  unit: CXTPDockingPaneTabbedContainer  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0f50
//
// 006e0f50  56                   push esi
// 006e0f51  8bf1                 mov esi, ecx
// 006e0f53  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e0f56  85c0                 test eax, eax
// 006e0f58  743e                 je 0x6e0f98
// 006e0f5a  50                   push eax
// 006e0f5b  ff15f8eb7700         call dword ptr [0x77ebf8]
// 006e0f61  50                   push eax
// 006e0f62  e859f2f4ff           call 0x6301c0
// 006e0f67  50                   push eax
// 006e0f68  e8038affff           call 0x6d9970
// 006e0f6d  50                   push eax
// 006e0f6e  e88ff2f4ff           call 0x630202
// 006e0f73  83c408               add esp, 8
// 006e0f76  85c0                 test eax, eax
// 006e0f78  751e                 jne 0x6e0f98
// 006e0f7a  83be0401000001       cmp dword ptr [esi + 0x104], 1
// 006e0f81  7f0e                 jg 0x6e0f91
// 006e0f83  8d4e54               lea ecx, [esi + 0x54]
// 006e0f86  e8c5f5ffff           call 0x6e0550
// 006e0f8b  83783000             cmp dword ptr [eax + 0x30], 0
// 006e0f8f  7407                 je 0x6e0f98
// 006e0f91  b801000000           mov eax, 1
// 006e0f96  5e                   pop esi
// 006e0f97  c3                   ret 
// 006e0f98  33c0                 xor eax, eax
// 006e0f9a  5e                   pop esi
// 006e0f9b  c3                   ret 

extern "C" void* __stdcall GetParent(void*);

extern "C" void* __cdecl sub_006301C0(void*);
extern "C" void* __cdecl sub_00630202(void*);
extern "C" void* __cdecl sub_006D9970(void*);

struct CXTPDockingPaneTabbedContainer
{
    char pad_0000[0x20];
    void* field_0020;
    char pad_0024[0x30];
    char field_0054[0xB0];
    int field_0104;
    int method_006E0550();
    int method_006E0F50();
};

int CXTPDockingPaneTabbedContainer::method_006E0F50()
{
    if (field_0020 != 0)
    {
        void* p = GetParent(field_0020);
        p = sub_006301C0(p);
        p = sub_006D9970(p);
        p = sub_00630202(p);
        if (p == 0)
        {
            if (field_0104 <= 1)
            {
                int r = ((CXTPDockingPaneTabbedContainer*)((char*)this + 0x54))->method_006E0550();
                if (*(int*)(r + 0x30) == 0)
                    return 0;
            }
            return 1;
        }
    }
    return 0;
}
