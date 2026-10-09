// from server: 87% by colin
// roc 2007-08 0068d350  unit: CXTPTabClientWnd::CTabClientDropTarget  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068d350
//
// 0068d350  56                   push esi
// 0068d351  8bf1                 mov esi, ecx
// 0068d353  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0068d356  e8e5c3ffff           call 0x689740
// 0068d35b  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 0068d362  7431                 je 0x68d395
// 0068d364  8b442418             mov eax, dword ptr [esp + 0x18]
// 0068d368  8b542414             mov edx, dword ptr [esp + 0x14]
// 0068d36c  50                   push eax
// 0068d36d  52                   push edx
// 0068d36e  e8ddfbffff           call 0x68cf50
// 0068d373  85c0                 test eax, eax
// 0068d375  741e                 je 0x68d395
// 0068d377  8b4860               mov ecx, dword ptr [eax + 0x60]
// 0068d37a  394104               cmp dword ptr [ecx + 4], eax
// 0068d37d  7416                 je 0x68d395
// 0068d37f  8bc8                 mov ecx, eax
// 0068d381  e8eafd0600           call 0x6fd170
// 0068d386  50                   push eax
// 0068d387  e8342efaff           call 0x6301c0
// 0068d38c  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0068d38f  50                   push eax
// 0068d390  e8bbdbffff           call 0x68af50
// 0068d395  33c0                 xor eax, eax
// 0068d397  5e                   pop esi
// 0068d398  c21400               ret 0x14

struct CXTPTabClientWnd_CTabClientDropTarget
{
    char pad[0x38];
    void* field_38;
    int sub_68d350(int, int, int, int, int);
};

extern "C" void* __stdcall sub_689740(void*);
extern "C" void* __stdcall sub_68cf50(int, int);
extern "C" void* __stdcall sub_6fd170(void*);
extern "C" void* __stdcall sub_6301c0(void*);
extern "C" void* __stdcall sub_68af50(void*, void*);

int CXTPTabClientWnd_CTabClientDropTarget::sub_68d350(int a1, int a2, int a3, int a4, int a5)
{
    void* p = sub_689740(field_38);
    if (*(int*)((char*)p + 0xb0) != 0)
    {
        void* q = sub_68cf50(a4, a5);
        if (q != 0)
        {
            void* r = *(void**)((char*)q + 0x60);
            if (*(void**)((char*)r + 4) != q)
            {
                void* s = sub_6fd170(q);
                void* t = sub_6301c0(s);
                sub_68af50(field_38, t);
            }
        }
    }
    return 0;
}
