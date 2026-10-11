// from server: 58% by atomic.potato
// roc 2009-06 0041d5a0  unit: CRobloxTreeCtrl  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041d5a0
//
// 0041d5a0  6aff                 push -1
// 0041d5a2  68a8e18400           push 0x84e1a8
// 0041d5a7  64a100000000         mov eax, dword ptr fs:[0]
// 0041d5ad  50                   push eax
// 0041d5ae  64892500000000       mov dword ptr fs:[0], esp
// 0041d5b5  83ec08               sub esp, 8
// 0041d5b8  53                   push ebx
// 0041d5b9  56                   push esi
// 0041d5ba  57                   push edi
// 0041d5bb  8bf1                 mov esi, ecx
// 0041d5bd  e818be2f00           call 0x7193da
// 0041d5c2  8a9eb8000000         mov bl, byte ptr [esi + 0xb8]
// 0041d5c8  8dbeb8000000         lea edi, [esi + 0xb8]
// 0041d5ce  897c240c             mov dword ptr [esp + 0xc], edi
// 0041d5d2  885c2410             mov byte ptr [esp + 0x10], bl
// 0041d5d6  c60701               mov byte ptr [edi], 1
// 0041d5d9  8b4620               mov eax, dword ptr [esi + 0x20]
// 0041d5dc  680000ffff           push 0xffff0000
// 0041d5e1  6a00                 push 0
// 0041d5e3  6801110000           push 0x1101
// 0041d5e8  50                   push eax
// 0041d5e9  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0041d5f1  ff1590ee8900         call dword ptr [0x89ee90]
// 0041d5f7  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0041d5fd  85c9                 test ecx, ecx
// 0041d5ff  7412                 je 0x41d613
// 0041d601  8b11                 mov edx, dword ptr [ecx]
// 0041d603  8b02                 mov eax, dword ptr [edx]
// 0041d605  6a01                 push 1
// 0041d607  ffd0                 call eax
// 0041d609  c7869400000000000000 mov dword ptr [esi + 0x94], 0
// 0041d613  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041d617  881f                 mov byte ptr [edi], bl
// 0041d619  5f                   pop edi
// 0041d61a  5e                   pop esi
// 0041d61b  5b                   pop ebx
// 0041d61c  64890d00000000       mov dword ptr fs:[0], ecx
// 0041d623  83c414               add esp, 0x14
// 0041d626  c3                   ret 

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CRobloxTreeCtrl {
    char pad0[0x20];
    void* hwnd;
    char pad1[0x94 - 0x24];
    void* field_94;
    char pad2[0xb8 - 0x98];
    char field_b8;
    char pad3[0x100 - 0xb9];
    void func_0041d5a0();
};

extern void G1_func_007193da();

void CRobloxTreeCtrl::func_0041d5a0()
{
    G1_func_007193da();
    char saved = field_b8;
    field_b8 = 1;
    SendMessageA(hwnd, 0x1101, 0, 0xffff0000);
    if (field_94) {
        void** vt = *(void***)field_94;
        ((void (__stdcall*)(int))vt[0])(1);
        field_94 = 0;
    }
    field_b8 = saved;
}
