// from server: 78% by colin
// roc 2008-06 007a5f2a  unit: CXTIconHandle  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5f2a
//
// 007a5f2a  8bff                 mov edi, edi
// 007a5f2c  55                   push ebp
// 007a5f2d  8bec                 mov ebp, esp
// 007a5f2f  a108f39700           mov eax, dword ptr [0x97f308]
// 007a5f34  ff7508               push dword ptr [ebp + 8]
// 007a5f37  83f801               cmp eax, 1
// 007a5f3a  7511                 jne 0x7a5f4d
// 007a5f3c  6a00                 push 0
// 007a5f3e  ff15b8228000         call dword ptr [0x8022b8]
// 007a5f44  50                   push eax
// 007a5f45  ff15f0218000         call dword ptr [0x8021f0]
// 007a5f4b  5d                   pop ebp
// 007a5f4c  c3                   ret 
// 007a5f4d  50                   push eax
// 007a5f4e  ff150cf39700         call dword ptr [0x97f30c]
// 007a5f54  5d                   pop ebp
// 007a5f55  c3                   ret 

typedef unsigned long DWORD;
typedef void* HANDLE;

extern "C" HANDLE __stdcall GetProcessHeap();
extern "C" int __stdcall HeapFree(HANDLE, DWORD, void*);

DWORD g_97f308;
void (__stdcall *g_97f30c)(void*);
void* (__stdcall *g_8022b8)(HANDLE, DWORD);
void* (__stdcall *g_8021f0)(void*);

void f(void* p)
{
    DWORD v = g_97f308;
    if (v == 1) {
        g_8021f0(g_8022b8(GetProcessHeap(), 0));
    } else {
        g_97f30c(p);
    }
}
