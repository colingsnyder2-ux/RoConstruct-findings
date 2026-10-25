// from server: 100% by atomic.potato
// roc 2011-06 00425310  unit: CInstanceRecord  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00425310
//
// 00425310  68e0524200           push 0x4252e0
// 00425315  687c25cb00           push 0xcb257c
// 0042531a  e8f1c2fdff           call 0x401610
// 0042531f  b801000000           mov eax, 1
// 00425324  83c408               add esp, 8
// 00425327  84057825cb00         test byte ptr [0xcb2578], al
// 0042532d  751f                 jne 0x42534e
// 0042532f  09057825cb00         or dword ptr [0xcb2578], eax
// 00425335  33c0                 xor eax, eax
// 00425337  68500aa300           push 0xa30a50
// 0042533c  a37025cb00           mov dword ptr [0xcb2570], eax
// 00425341  a37425cb00           mov dword ptr [0xcb2574], eax
// 00425346  e8125e3e00           call 0x80b15d
// 0042534b  83c404               add esp, 4
// 0042534e  b87025cb00           mov eax, 0xcb2570
// 00425353  c3                   ret 

extern "C" void __cdecl fn_00401610(void*, void*);
extern "C" void __cdecl fn_0080b15d(void*);
extern void fn_004252e0();

int g_00cb2570;
int g_00cb2574;
int g_00cb2578;
char g_00cb257c;

int* func_00425310()
{
    fn_00401610((void*)0xcb257c, (void*)0x4252e0);
    if (!(g_00cb2578 & 1)) {
        g_00cb2578 |= 1;
        g_00cb2570 = 0;
        g_00cb2574 = 0;
        fn_0080b15d((void*)0xa30a50);
    }
    return &g_00cb2570;
}
