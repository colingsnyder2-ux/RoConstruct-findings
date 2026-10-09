// from server: 89% by colin
// roc 2007-08 00689870  unit: CXTPTabClientWnd::CSingleWorkspace  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689870
//
// 00689870  53                   push ebx
// 00689871  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00689875  55                   push ebp
// 00689876  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0068987a  56                   push esi
// 0068987b  8bf1                 mov esi, ecx
// 0068987d  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 00689883  85c0                 test eax, eax
// 00689885  57                   push edi
// 00689886  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0068988a  740f                 je 0x68989b
// 0068988c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00689892  57                   push edi
// 00689893  53                   push ebx
// 00689894  55                   push ebp
// 00689895  56                   push esi
// 00689896  e8f5cf0000           call 0x696890
// 0068989b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068989f  50                   push eax
// 006898a0  57                   push edi
// 006898a1  53                   push ebx
// 006898a2  55                   push ebp
// 006898a3  8bce                 mov ecx, esi
// 006898a5  e83265faff           call 0x62fddc
// 006898aa  5f                   pop edi
// 006898ab  5e                   pop esi
// 006898ac  5d                   pop ebp
// 006898ad  5b                   pop ebx
// 006898ae  c21000               ret 0x10

struct CXTPTabClientWnd_CSingleWorkspace {
    int f(int a1, int a2, int a3, int a4);
};

extern "C" int __stdcall sub_696890(int, int, int, int, int);
extern "C" int __stdcall sub_62FDDC(int, int, int, int, int);

int CXTPTabClientWnd_CSingleWorkspace::f(int a1, int a2, int a3, int a4)
{
    int* p = *(int**)((char*)this + 0xe4);
    if (p != 0) {
        sub_696890(*(int*)((char*)p + 0xc8), (int)this, a1, a2, a3);
    }
    return sub_62FDDC((int)this, a1, a2, a3, a4);
}
