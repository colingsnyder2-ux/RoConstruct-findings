// from server: 56% by colin
// from server: 51% by colin
// roc 2008-06 004b5700  unit: RBX::Network::VClient::?$FactoryProduct  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5700
//
// 004b5700  64a100000000         mov eax, dword ptr fs:[0]
// 004b5706  6aff                 push -1
// 004b5708  68e2897c00           push 0x7c89e2
// 004b570d  50                   push eax
// 004b570e  64892500000000       mov dword ptr fs:[0], esp
// 004b5715  83ec48               sub esp, 0x48
// 004b5718  55                   push ebp
// 004b5719  56                   push esi
// 004b571a  57                   push edi
// 004b571b  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 004b571f  8be9                 mov ebp, ecx
// 004b5721  85ff                 test edi, edi
// 004b5723  0f84a7000000         je 0x4b57d0
// 004b5729  8bcf                 mov ecx, edi
// 004b572b  e83024faff           call 0x457b60
// 004b5730  8bf0                 mov esi, eax
// 004b5732  85f6                 test esi, esi
// 004b5734  0f8496000000         je 0x4b57d0
// 004b573a  6884438200           push 0x824384
// 004b573f  8d4c2420             lea ecx, [esp + 0x20]
// 004b5743  ff1558248000         call dword ptr [0x802458]
// 004b5749  8d44241c             lea eax, [esp + 0x1c]
// 004b574d  50                   push eax
// 004b574e  8bce                 mov ecx, esi
// 004b5750  c744246000000000     mov dword ptr [esp + 0x60], 0
// 004b5758  e8f3210a00           call 0x557950
// 004b575d  85c0                 test eax, eax
// 004b575f  7407                 je 0x4b5768
// 004b5761  05e4000000           add eax, 0xe4
// 004b5766  eb02                 jmp 0x4b576a
// 004b5768  33c0                 xor eax, eax
// 004b576a  50                   push eax
// 004b576b  8d4c2418             lea ecx, [esp + 0x18]
// 004b576f  51                   push ecx
// 004b5770  e8bb1d0100           call 0x4c7530
// 004b5775  83c408               add esp, 8
// 004b5778  8d4c241c             lea ecx, [esp + 0x1c]
// 004b577c  c644245c02           mov byte ptr [esp + 0x5c], 2
// 004b5781  ff1568248000         call dword ptr [0x802468]
// 004b5787  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b578b  85c9                 test ecx, ecx
// 004b578d  7407                 je 0x4b5796
// 004b578f  6a00                 push 0
// 004b5791  e85a510a00           call 0x55a8f0
// 004b5796  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b579a  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 004b57a2  85f6                 test esi, esi
// 004b57a4  742a                 je 0x4b57d0
// 004b57a6  8d5604               lea edx, [esi + 4]
// 004b57a9  83c8ff               or eax, 0xffffffff
// 004b57ac  f00fc102             lock xadd dword ptr [edx], eax
// 004b57b0  751e                 jne 0x4b57d0
// 004b57b2  8b16                 mov edx, dword ptr [esi]
// 004b57b4  8b4204               mov eax, dword ptr [edx + 4]
// 004b57b7  8bce                 mov ecx, esi
// 004b57b9  ffd0                 call eax
// 004b57bb  8d4e08               lea ecx, [esi + 8]
// 004b57be  83caff               or edx, 0xffffffff
// 004b57c1  f00fc111             lock xadd dword ptr [ecx], edx
// 004b57c5  7509                 jne 0x4b57d0
// 004b57c7  8b06                 mov eax, dword ptr [esi]
// 004b57c9  8b5008               mov edx, dword ptr [eax + 8]
// 004b57cc  8bce                 mov ecx, esi
// 004b57ce  ffd2                 call edx
// 004b57d0  85ed                 test ebp, ebp
// 004b57d2  7408                 je 0x4b57dc
// 004b57d4  8db534010000         lea esi, [ebp + 0x134]
// 004b57da  eb02                 jmp 0x4b57de
// 004b57dc  33f6                 xor esi, esi
// 004b57de  85ff                 test edi, edi
// 004b57e0  7417                 je 0x4b57f9
// 004b57e2  8bcf                 mov ecx, edi
// 004b57e4  e897d4f9ff           call 0x452c80
// 004b57e9  85c0                 test eax, eax
// 004b57eb  740c                 je 0x4b57f9
// 004b57ed  56                   push esi
// 004b57ee  8d8830010000         lea ecx, [eax + 0x130]
// 004b57f4  e887021300           call 0x5e5a80
// 004b57f9  85ed                 test ebp, ebp
// 004b57fb  7408                 je 0x4b5805
// 004b57fd  8dbd34010000         lea edi, [ebp + 0x134]
// 004b5803  eb02                 jmp 0x4b5807
// 004b5805  33ff                 xor edi, edi
// 004b5807  8b742468             mov esi, dword ptr [esp + 0x68]
// 004b580b  85f6                 test esi, esi
// 004b580d  0f84c6000000         je 0x4b58d9
// 004b5813  8bce                 mov ecx, esi
// 004b5815  e866d4f9ff           call 0x452c80
// 004b581a  85c0                 test eax, eax
// 004b581c  740c                 je 0x4b582a
// 004b581e  57                   push edi
// 004b581f  8d8830010000         lea ecx, [eax + 0x130]
// 004b5825  e876c0f6ff           call 0x4218a0
// 004b582a  8bce                 mov ecx, esi
// 004b582c  e82f23faff           call 0x457b60
// 004b5831  8bf0                 mov esi, eax
// 004b5833  85f6                 test esi, esi
// 004b5835  0f849e000000         je 0x4b58d9
// 004b583b  8d44240c             lea eax, [esp + 0xc]
// 004b583f  50                   push eax
// 004b5840  e80bf6ffff           call 0x4b4e50
// 004b5845  83c404               add esp, 4
// 004b5848  6884438200           push 0x824384
// 004b584d  8d4c243c             lea ecx, [esp + 0x3c]
// 004b5851  c744246003000000     mov dword ptr [esp + 0x60], 3
// 004b5859  ff1558248000         call dword ptr [0x802458]
// 004b585f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5863  8b11                 mov edx, dword ptr [ecx]
// 004b5865  8b5204               mov edx, dword ptr [edx + 4]
// 004b5868  8d442438             lea eax, [esp + 0x38]
// 004b586c  50                   push eax
// 004b586d  c644246004           mov byte ptr [esp + 0x60], 4
// 004b5872  ffd2                 call edx
// 004b5874  8d4c2438             lea ecx, [esp + 0x38]
// 004b5878  c644245c03           mov byte ptr [esp + 0x5c], 3
// 004b587d  ff1568248000         call dword ptr [0x802468]
// 004b5883  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5887  56                   push esi
// 004b5888  e863500a00           call 0x55a8f0
// 004b588d  8b853c010000         mov eax, dword ptr [ebp + 0x13c]
// 004b5893  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5897  50                   push eax
// 004b5898  e8a3491100           call 0x5ca240
// 004b589d  8b442410             mov eax, dword ptr [esp + 0x10]
// 004b58a1  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 004b58a9  85c0                 test eax, eax
// 004b58ab  742c                 je 0x4b58d9
// 004b58ad  8bf0                 mov esi, eax
// 004b58af  83c004               add eax, 4
// 004b58b2  83c9ff               or ecx, 0xffffffff
// 004b58b5  f00fc108             lock xadd dword ptr [eax], ecx
// 004b58b9  751e                 jne 0x4b58d9
// 004b58bb  8b16                 mov edx, dword ptr [esi]
// 004b58bd  8b4204               mov eax, dword ptr [edx + 4]
// 004b58c0  8bce                 mov ecx, esi
// 004b58c2  ffd0                 call eax
// 004b58c4  8d4e08               lea ecx, [esi + 8]
// 004b58c7  83caff               or edx, 0xffffffff
// 004b58ca  f00fc111             lock xadd dword ptr [ecx], edx
// 004b58ce  7509                 jne 0x4b58d9
// 004b58d0  8b06                 mov eax, dword ptr [esi]
// 004b58d2  8b5008               mov edx, dword ptr [eax + 8]
// 004b58d5  8bce                 mov ecx, esi
// 004b58d7  ffd2                 call edx
// 004b58d9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004b58dd  5f                   pop edi
// 004b58de  5e                   pop esi
// 004b58df  5d                   pop ebp
// 004b58e0  64890d00000000       mov dword ptr fs:[0], ecx
// 004b58e7  83c454               add esp, 0x54
// 004b58ea  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct String {
    void* storage[8];
    String(const char*);
    __declspec(dllimport) ~String() throw();
};

struct Instance {
    void* vptr;
    char pad[0x130];
    void* field130;
    void* field134;
    void* field13c;
};

struct Listener {
    void* vptr;
    char pad[0x12c];
    void* field130;
    void* field134;
};

extern "C" void* __cdecl func_004b4e50(void*);

void* __cdecl func_00457b60(void*);
void* __cdecl func_00452c80(void*);
void __cdecl func_004c7530(void*, void*);
void __cdecl func_00557950(void*, void*);
void __cdecl func_0055a8f0(void*, void*);
void __cdecl func_005ca240(void*, void*);
void __cdecl func_005e5a80(void*, void*);
void __cdecl func_004218a0(void*, void*);

extern void* __cdecl func_00802458(void*, const char*);
extern void* __cdecl func_00802468(void*);

struct VClient {
    void __thiscall method(void* a, void* b);
};

void VClient::method(void* a, void* b)
{
    void* p = a;
    if (p) {
        void* r = func_00457b60(p);
        if (r) {
            String s("Network");
            void* tmp = 0;
            func_00557950(r, &tmp);
            void* q;
            if (tmp) {
                q = (char*)tmp + 0xe4;
            } else {
                q = 0;
            }
            void* out;
            func_004c7530(&out, q);
            func_00802468(&s);
            if (out) {
                func_0055a8f0(out, 0);
            }
            RefCounted* rc = (RefCounted*)out;
            if (rc) {
                if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                    void** vt = (void**)rc->vptr;
                    ((void (__thiscall*)(void*))vt[1])(rc);
                    if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                        void** vt2 = (void**)rc->vptr;
                        ((void (__thiscall*)(void*))vt2[2])(rc);
                    }
                }
            }
        }
    }

    void* self134;
    if (this) {
        self134 = (char*)this + 0x134;
    } else {
        self134 = 0;
    }

    if (a) {
        void* r2 = func_00452c80(a);
        if (r2) {
            func_005e5a80((char*)r2 + 0x130, self134);
        }
    }

    void* self134b;
    if (this) {
        self134b = (char*)this + 0x134;
    } else {
        self134b = 0;
    }

    if (b) {
        void* r3 = func_00452c80(b);
        if (r3) {
            func_004218a0((char*)r3 + 0x130, self134b);
        }
        void* r4 = func_00457b60(b);
        if (r4) {
            void* obj;
            func_004b4e50(&obj);
            String s2("Network");
            void** vt = (void**)obj;
            void* out2;
            ((void (__thiscall*)(void*, void*))vt[1])(obj, &out2);
            func_00802468(&s2);
            func_0055a8f0(obj, r4);
            func_005ca240(obj, *(void**)((char*)this + 0x13c));
            RefCounted* rc2 = (RefCounted*)obj;
            if (rc2) {
                if (_InterlockedExchangeAdd(&rc2->refCount, -1) == 1) {
                    void** vt2 = (void**)rc2->vptr;
                    ((void (__thiscall*)(void*))vt2[1])(rc2);
                    if (_InterlockedExchangeAdd(&rc2->weakCount, -1) == 1) {
                        void** vt3 = (void**)rc2->vptr;
                        ((void (__thiscall*)(void*))vt3[2])(rc2);
                    }
                }
            }
        }
    }
}
