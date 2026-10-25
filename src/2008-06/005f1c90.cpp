// from server: 100% by tester
// roc 2008-06 005f1c90  unit: RBX::FaceInstance  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1c90
//
// 005f1c90  53                   push ebx
// 005f1c91  8b1d88228000         mov ebx, dword ptr [0x802288]
// 005f1c97  55                   push ebp
// 005f1c98  56                   push esi
// 005f1c99  57                   push edi
// 005f1c9a  8bf1                 mov esi, ecx
// 005f1c9c  8b4608               mov eax, dword ptr [esi + 8]
// 005f1c9f  6aff                 push -1
// 005f1ca1  50                   push eax
// 005f1ca2  33ff                 xor edi, edi
// 005f1ca4  ffd3                 call ebx
// 005f1ca6  8b4614               mov eax, dword ptr [esi + 0x14]
// 005f1ca9  8b2dc0228000         mov ebp, dword ptr [0x8022c0]
// 005f1caf  85c0                 test eax, eax
// 005f1cb1  7425                 je 0x5f1cd8
// 005f1cb3  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005f1cb6  85c9                 test ecx, ecx
// 005f1cb8  750f                 jne 0x5f1cc9
// 005f1cba  8b4e08               mov ecx, dword ptr [esi + 8]
// 005f1cbd  51                   push ecx
// 005f1cbe  ff1580228000         call dword ptr [0x802280]
// 005f1cc4  5f                   pop edi
// 005f1cc5  5e                   pop esi
// 005f1cc6  5d                   pop ebp
// 005f1cc7  5b                   pop ebx
// 005f1cc8  c3                   ret 
// 005f1cc9  40                   inc eax
// 005f1cca  49                   dec ecx
// 005f1ccb  894614               mov dword ptr [esi + 0x14], eax
// 005f1cce  894e10               mov dword ptr [esi + 0x10], ecx
// 005f1cd1  bf01000000           mov edi, 1
// 005f1cd6  eb33                 jmp 0x5f1d0b
// 005f1cd8  8b16                 mov edx, dword ptr [esi]
// 005f1cda  6aff                 push -1
// 005f1cdc  52                   push edx
// 005f1cdd  ffd3                 call ebx
// 005f1cdf  8b4610               mov eax, dword ptr [esi + 0x10]
// 005f1ce2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005f1ce5  3bc1                 cmp eax, ecx
// 005f1ce7  7619                 jbe 0x5f1d02
// 005f1ce9  85c9                 test ecx, ecx
// 005f1ceb  7408                 je 0x5f1cf5
// 005f1ced  2bc1                 sub eax, ecx
// 005f1cef  894610               mov dword ptr [esi + 0x10], eax
// 005f1cf2  897e0c               mov dword ptr [esi + 0xc], edi
// 005f1cf5  ff4e10               dec dword ptr [esi + 0x10]
// 005f1cf8  bf01000000           mov edi, 1
// 005f1cfd  897e14               mov dword ptr [esi + 0x14], edi
// 005f1d00  eb09                 jmp 0x5f1d0b
// 005f1d02  8b06                 mov eax, dword ptr [esi]
// 005f1d04  6a00                 push 0
// 005f1d06  6a01                 push 1
// 005f1d08  50                   push eax
// 005f1d09  ffd5                 call ebp
// 005f1d0b  8b4e08               mov ecx, dword ptr [esi + 8]
// 005f1d0e  51                   push ecx
// 005f1d0f  ff1580228000         call dword ptr [0x802280]
// 005f1d15  85ff                 test edi, edi
// 005f1d17  7409                 je 0x5f1d22
// 005f1d19  8b5604               mov edx, dword ptr [esi + 4]
// 005f1d1c  6a00                 push 0
// 005f1d1e  57                   push edi
// 005f1d1f  52                   push edx
// 005f1d20  ffd5                 call ebp
// 005f1d22  5f                   pop edi
// 005f1d23  5e                   pop esi
// 005f1d24  5d                   pop ebp
// 005f1d25  5b                   pop ebx
// 005f1d26  c3                   ret 

extern "C" {
    __declspec(dllimport) void* __stdcall WaitForSingleObject(void*, unsigned long);
    __declspec(dllimport) int __stdcall ReleaseMutex(void*);
    __declspec(dllimport) int __stdcall ReleaseSemaphore(void*, long, long*);
}

struct FaceInstance {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void func();
};

void FaceInstance::func()
{
    void* (__stdcall *wait)(void*, unsigned long) = WaitForSingleObject;
    int (__stdcall *release)(void*, long, long*) = ReleaseSemaphore;
    int (__stdcall *relmutex)(void*) = ReleaseMutex;

    int did = 0;
    wait(field8, (unsigned long)-1);

    if (field14 != 0) {
        if (field10 == 0) {
            relmutex(field8);
            return;
        }
        field14 = (char*)field14 + 1;
        field10 = (char*)field10 - 1;
        did = 1;
    } else {
        wait(field0, (unsigned long)-1);
        unsigned int a = (unsigned int)field10;
        unsigned int b = (unsigned int)fieldC;
        if (a > b) {
            if (b != 0) {
                field10 = (void*)(a - b);
                fieldC = (void*)did;
            }
            field10 = (char*)field10 - 1;
            did = 1;
            field14 = (void*)did;
        } else {
            release(field0, 1, 0);
        }
    }

    relmutex(field8);

    if (did != 0) {
        release(field4, did, 0);
    }
}
