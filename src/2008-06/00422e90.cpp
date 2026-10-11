// from server: 69% by atomic.potato
// roc 2008-06 00422e90  unit: CRobloxTreeCtrl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422e90
//
// 00422e90  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00422e93  56                   push esi
// 00422e94  8b35142e8000         mov esi, dword ptr [0x802e14]
// 00422e9a  6a00                 push 0
// 00422e9c  6a00                 push 0
// 00422e9e  680f110000           push 0x110f
// 00422ea3  50                   push eax
// 00422ea4  ffd6                 call esi
// 00422ea6  50                   push eax
// 00422ea7  e832dd2700           call 0x6a0bde
// 00422eac  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00422eaf  6a00                 push 0
// 00422eb1  6a20                 push 0x20
// 00422eb3  68c5000000           push 0xc5
// 00422eb8  51                   push ecx
// 00422eb9  ffd6                 call esi
// 00422ebb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00422ebf  c70200000000         mov dword ptr [edx], 0
// 00422ec5  5e                   pop esi
// 00422ec6  c20800               ret 8

extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
extern "C" void* __cdecl sub_6A0BDE(void*);

struct CRobloxTreeCtrl {
    char pad[0x20];
    void* field20;
    void method(int, int*);
};

void CRobloxTreeCtrl::method(int a, int* b) {
    void* hwnd = field20;
    void* r = SendMessageA(hwnd, 0x110f, 0, 0);
    void* obj = sub_6A0BDE(r);
    void* h2 = *(void**)((char*)obj + 0x20);
    SendMessageA(h2, 0xc5, 0x20, 0);
    *b = 0;
}
