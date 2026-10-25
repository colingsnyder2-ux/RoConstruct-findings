// from server: 100% by atomic.potato
// roc 2008-06 005630e0  unit: RBX::ContentProvider  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005630e0
//
// 005630e0  834108ff             add dword ptr [ecx + 8], -1
// 005630e4  7519                 jne 0x5630ff
// 005630e6  80790400             cmp byte ptr [ecx + 4], 0
// 005630ea  740a                 je 0x5630f6
// 005630ec  8b01                 mov eax, dword ptr [ecx]
// 005630ee  50                   push eax
// 005630ef  ff15f4218000         call dword ptr [0x8021f4]
// 005630f5  c3                   ret 
// 005630f6  8b09                 mov ecx, dword ptr [ecx]
// 005630f8  51                   push ecx
// 005630f9  ff1580228000         call dword ptr [0x802280]
// 005630ff  c3                   ret 

extern "C" void __declspec(dllimport) __stdcall LeaveCriticalSection(void *);
extern "C" int __declspec(dllimport) __stdcall ReleaseMutex(void *);

struct ContentProvider {
    int value;
    unsigned char flag;
    int count;
    void f();
};

void ContentProvider::f()
{
    if (--count != 0)
        return;

    if (flag)
        ReleaseMutex((void *)value);
    else
        LeaveCriticalSection((void *)value);
}
