// from server: 68% by colin
// roc 2007-08 006e4520  unit: PAVCXTPDockingPaneSplitterWnd::?$CList  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e4520
//
// 006e4520  83ec20               sub esp, 0x20
// 006e4523  56                   push esi
// 006e4524  8bf1                 mov esi, ecx
// 006e4526  837e5400             cmp dword ptr [esi + 0x54], 0
// 006e452a  7425                 je 0x6e4551
// 006e452c  e82ff1ffff           call 0x6e3660
// 006e4531  83b8f400000000       cmp dword ptr [eax + 0xf4], 0
// 006e4538  7517                 jne 0x6e4551
// 006e453a  8d442404             lea eax, [esp + 4]
// 006e453e  50                   push eax
// 006e453f  8d4c2418             lea ecx, [esp + 0x18]
// 006e4543  51                   push ecx
// 006e4544  8bce                 mov ecx, esi
// 006e4546  e8a5f5ffff           call 0x6e3af0
// 006e454b  85c0                 test eax, eax
// 006e454d  750e                 jne 0x6e455d
// 006e454f  8bce                 mov ecx, esi
// 006e4551  e8e8bcf4ff           call 0x63023e
// 006e4556  5e                   pop esi
// 006e4557  83c420               add esp, 0x20
// 006e455a  c20c00               ret 0xc
// 006e455d  8b5664               mov edx, dword ptr [esi + 0x64]
// 006e4560  52                   push edx
// 006e4561  ff1560ed7700         call dword ptr [0x77ed60]
// 006e4567  b801000000           mov eax, 1
// 006e456c  5e                   pop esi
// 006e456d  83c420               add esp, 0x20
// 006e4570  c20c00               ret 0xc

extern "C" void __stdcall SetCursor(void*);

struct CXTPDockingPaneSplitterWnd
{
    char pad[0x54];
    int field_0x54;
    char pad2[0xc];
    int field_0x64;
    int sub_6e4520(int, int, int);
};

extern "C" void* __stdcall sub_6e3660();
extern "C" int __stdcall sub_6e3af0(int*, int*);
extern "C" void __stdcall sub_63023e();

int CXTPDockingPaneSplitterWnd::sub_6e4520(int a1, int a2, int a3)
{
    if (field_0x54 != 0)
    {
        void* p = sub_6e3660();
        if (*(int*)((char*)p + 0xf4) == 0)
        {
            int local1;
            int local2;
            int r = sub_6e3af0(&local1, &local2);
            if (r != 0)
            {
                SetCursor((void*)field_0x64);
                return 1;
            }
        }
    }
    sub_63023e();
    return 0;
}
