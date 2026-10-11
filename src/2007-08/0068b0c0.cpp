// from server: 51% by atomic.potato
// roc 2007-08 0068b0c0  unit: CXTPTabClientWnd  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068b0c0
//
// 0068b0c0  6aff                 push -1
// 0068b0c2  685aaa7600           push 0x76aa5a
// 0068b0c7  64a100000000         mov eax, dword ptr fs:[0]
// 0068b0cd  50                   push eax
// 0068b0ce  51                   push ecx
// 0068b0cf  56                   push esi
// 0068b0d0  57                   push edi
// 0068b0d1  a188518b00           mov eax, dword ptr [0x8b5188]
// 0068b0d6  33c4                 xor eax, esp
// 0068b0d8  50                   push eax
// 0068b0d9  8d442410             lea eax, [esp + 0x10]
// 0068b0dd  64a300000000         mov dword ptr fs:[0], eax
// 0068b0e3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0068b0e7  6a00                 push 0
// 0068b0e9  6a00                 push 0
// 0068b0eb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068b0f3  8b4720               mov eax, dword ptr [edi + 0x20]
// 0068b0f6  6869280000           push 0x2869
// 0068b0fb  50                   push eax
// 0068b0fc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0068b104  ff15d8ec7700         call dword ptr [0x77ecd8]
// 0068b10a  8b742420             mov esi, dword ptr [esp + 0x20]
// 0068b10e  50                   push eax
// 0068b10f  8bce                 mov ecx, esi
// 0068b111  ff15b8dd7700         call dword ptr [0x77ddb8]
// 0068b117  8bce                 mov ecx, esi
// 0068b119  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0068b121  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0068b129  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0068b12f  84c0                 test al, al
// 0068b131  7430                 je 0x68b163
// 0068b133  8b17                 mov edx, dword ptr [edi]
// 0068b135  8b8244010000         mov eax, dword ptr [edx + 0x144]
// 0068b13b  8bcf                 mov ecx, edi
// 0068b13d  ffd0                 call eax
// 0068b13f  85c0                 test eax, eax
// 0068b141  740c                 je 0x68b14f
// 0068b143  83c020               add eax, 0x20
// 0068b146  50                   push eax
// 0068b147  8bce                 mov ecx, esi
// 0068b149  ff1534d47700         call dword ptr [0x77d434]
// 0068b14f  8bce                 mov ecx, esi
// 0068b151  ff15d0dc7700         call dword ptr [0x77dcd0]
// 0068b157  84c0                 test al, al
// 0068b159  7408                 je 0x68b163
// 0068b15b  56                   push esi
// 0068b15c  8bcf                 mov ecx, edi
// 0068b15e  e8ed50faff           call 0x630250
// 0068b163  8bc6                 mov eax, esi
// 0068b165  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0068b169  64890d00000000       mov dword ptr fs:[0], ecx
// 0068b170  59                   pop ecx
// 0068b171  5f                   pop edi
// 0068b172  5e                   pop esi
// 0068b173  83c410               add esp, 0x10
// 0068b176  c20800               ret 8

struct CXTPTabClientWnd
{
    void sub_630250(void*);
    void func_0068b0c0(void*, int);
};

extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
extern "C" void* __stdcall sub_77ddb8(void*);
extern "C" int __stdcall sub_77dcd0(void*);
extern "C" void __stdcall sub_77d434(void*, void*);

void CXTPTabClientWnd::func_0068b0c0(void* p1, int p2)
{
    void* hwnd = SendMessageA(*(void**)((char*)this + 0x20), 0x2869, 0, 0);
    void* esi = sub_77ddb8(hwnd);
    sub_77d434(esi, 0);
    if (sub_77dcd0(esi))
    {
        void* r = (*(void* (__thiscall**)(void*))(*(int*)this + 0x144))(this);
        if (r)
            sub_77d434(esi, (char*)r + 0x20);
        if (sub_77dcd0(esi))
            sub_630250(esi);
    }
}
