// from server: 53% by atomic.potato
// roc 2008-06 0055a4b0  unit: RBX::VInstance::?$NonFactoryProduct  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a4b0
//
// 0055a4b0  57                   push edi
// 0055a4b1  8d442408             lea eax, [esp + 8]
// 0055a4b5  8bf9                 mov edi, ecx
// 0055a4b7  50                   push eax
// 0055a4b8  c70700000000         mov dword ptr [edi], 0
// 0055a4be  e82dfe0a00           call 0x60a2f0
// 0055a4c3  83c404               add esp, 4
// 0055a4c6  84c0                 test al, al
// 0055a4c8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055a4cc  752c                 jne 0x55a4fa
// 0055a4ce  8d4f08               lea ecx, [edi + 8]
// 0055a4d1  85c9                 test ecx, ecx
// 0055a4d3  741d                 je 0x55a4f2
// 0055a4d5  8b542408             mov edx, dword ptr [esp + 8]
// 0055a4d9  8911                 mov dword ptr [ecx], edx
// 0055a4db  894104               mov dword ptr [ecx + 4], eax
// 0055a4de  85c0                 test eax, eax
// 0055a4e0  7410                 je 0x55a4f2
// 0055a4e2  83c004               add eax, 4
// 0055a4e5  b901000000           mov ecx, 1
// 0055a4ea  f00fc108             lock xadd dword ptr [eax], ecx
// 0055a4ee  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055a4f2  c707fcd78200         mov dword ptr [edi], 0x82d7fc
// 0055a4f8  eb06                 jmp 0x55a500
// 0055a4fa  c70700000000         mov dword ptr [edi], 0
// 0055a500  85c0                 test eax, eax
// 0055a502  7434                 je 0x55a538
// 0055a504  56                   push esi
// 0055a505  8bf0                 mov esi, eax
// 0055a507  83c004               add eax, 4
// 0055a50a  83caff               or edx, 0xffffffff
// 0055a50d  f00fc110             lock xadd dword ptr [eax], edx
// 0055a511  751e                 jne 0x55a531
// 0055a513  8b06                 mov eax, dword ptr [esi]
// 0055a515  8b5004               mov edx, dword ptr [eax + 4]
// 0055a518  8bce                 mov ecx, esi
// 0055a51a  ffd2                 call edx
// 0055a51c  8d4608               lea eax, [esi + 8]
// 0055a51f  83c9ff               or ecx, 0xffffffff
// 0055a522  f00fc108             lock xadd dword ptr [eax], ecx
// 0055a526  7509                 jne 0x55a531
// 0055a528  8b16                 mov edx, dword ptr [esi]
// 0055a52a  8b4208               mov eax, dword ptr [edx + 8]
// 0055a52d  8bce                 mov ecx, esi
// 0055a52f  ffd0                 call eax
// 0055a531  5e                   pop esi
// 0055a532  8bc7                 mov eax, edi
// 0055a534  5f                   pop edi
// 0055a535  c20c00               ret 0xc
// 0055a538  8bc7                 mov eax, edi
// 0055a53a  5f                   pop edi
// 0055a53b  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" bool __cdecl func_0060a2f0();

struct VInstance {
    void* vptr;
    char pad[4];
    void* ptr8;
    void* ptrC;
    void* init(void* a, void* b);
};

void* VInstance::init(void* a, void* b)
{
    void* local;
    this->vptr = 0;
    if (!func_0060a2f0()) {
        if (&this->ptr8) {
            this->ptr8 = local;
            this->ptrC = b;
            if (b) {
                _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
            }
        }
        this->vptr = (void*)0x82d7fc;
    } else {
        this->vptr = 0;
    }
    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            (*(void (__thiscall**)(void*))(*(void**)b))(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                (*(void (__thiscall**)(void*))((char*)(*(void**)b) + 8))(b);
            }
        }
    }
    return this;
}
