// from server: 43% by atomic.potato
// roc 2007-08 0048bc70  unit: RBX::VShirtGraphic::?$FactoryProduct::Creator  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048bc70
//
// 0048bc70  6aff                 push -1
// 0048bc72  688b9e7400           push 0x749e8b
// 0048bc77  64a100000000         mov eax, dword ptr fs:[0]
// 0048bc7d  50                   push eax
// 0048bc7e  51                   push ecx
// 0048bc7f  53                   push ebx
// 0048bc80  55                   push ebp
// 0048bc81  56                   push esi
// 0048bc82  57                   push edi
// 0048bc83  a188518b00           mov eax, dword ptr [0x8b5188]
// 0048bc88  33c4                 xor eax, esp
// 0048bc8a  50                   push eax
// 0048bc8b  8d442418             lea eax, [esp + 0x18]
// 0048bc8f  64a300000000         mov dword ptr fs:[0], eax
// 0048bc95  8be9                 mov ebp, ecx
// 0048bc97  896c2414             mov dword ptr [esp + 0x14], ebp
// 0048bc9b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0048bc9f  8b742428             mov esi, dword ptr [esp + 0x28]
// 0048bca3  50                   push eax
// 0048bca4  8d5d04               lea ebx, [ebp + 4]
// 0048bca7  56                   push esi
// 0048bca8  8bcb                 mov ecx, ebx
// 0048bcaa  897500               mov dword ptr [ebp], esi
// 0048bcad  e82effffff           call 0x48bbe0
// 0048bcb2  85f6                 test esi, esi
// 0048bcb4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0048bcbc  743b                 je 0x48bcf9
// 0048bcbe  8dbea4000000         lea edi, [esi + 0xa4]
// 0048bcc4  85ff                 test edi, edi
// 0048bcc6  7431                 je 0x48bcf9
// 0048bcc8  8937                 mov dword ptr [edi], esi
// 0048bcca  8b33                 mov esi, dword ptr [ebx]
// 0048bccc  85f6                 test esi, esi
// 0048bcce  740c                 je 0x48bcdc
// 0048bcd0  8d4e08               lea ecx, [esi + 8]
// 0048bcd3  ba01000000           mov edx, 1
// 0048bcd8  f00fc111             lock xadd dword ptr [ecx], edx
// 0048bcdc  8b4f04               mov ecx, dword ptr [edi + 4]
// 0048bcdf  85c9                 test ecx, ecx
// 0048bce1  7413                 je 0x48bcf6
// 0048bce3  8d4108               lea eax, [ecx + 8]
// 0048bce6  83caff               or edx, 0xffffffff
// 0048bce9  f00fc110             lock xadd dword ptr [eax], edx
// 0048bced  7507                 jne 0x48bcf6
// 0048bcef  8b01                 mov eax, dword ptr [ecx]
// 0048bcf1  8b5008               mov edx, dword ptr [eax + 8]
// 0048bcf4  ffd2                 call edx
// 0048bcf6  897704               mov dword ptr [edi + 4], esi
// 0048bcf9  8bc5                 mov eax, ebp
// 0048bcfb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0048bcff  64890d00000000       mov dword ptr fs:[0], ecx
// 0048bd06  59                   pop ecx
// 0048bd07  5f                   pop edi
// 0048bd08  5e                   pop esi
// 0048bd09  5d                   pop ebp
// 0048bd0a  5b                   pop ebx
// 0048bd0b  83c410               add esp, 0x10
// 0048bd0e  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* field0;
    void ctor(void* a, void* b);
};

struct FactoryProduct {
    void* field0;
    Inner inner;
    void ctor(void* a, void* b);
};

void FactoryProduct::ctor(void* a, void* b) {
    field0 = a;
    inner.ctor(a, b);
    if (a != 0) {
        void** p = (void**)((char*)a + 0xa4);
        if (p != 0) {
            *p = a;
            void* old = inner.field0;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* cur = p[1];
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void** vt = *(void***)cur;
                    ((void (__stdcall*)(void*))vt[2])(cur);
                }
            }
            p[1] = old;
        }
    }
}
