// from server: 74% by colin
// roc 2007-08 0044f460  unit: VCRobloxDoc::?$VerbBinder  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044f460
//
// 0044f460  83ec08               sub esp, 8
// 0044f463  56                   push esi
// 0044f464  57                   push edi
// 0044f465  8d442408             lea eax, [esp + 8]
// 0044f469  50                   push eax
// 0044f46a  e8c143fbff           call 0x403830
// 0044f46f  8b08                 mov ecx, dword ptr [eax]
// 0044f471  8b8188010000         mov eax, dword ptr [ecx + 0x188]
// 0044f477  85c0                 test eax, eax
// 0044f479  7408                 je 0x44f483
// 0044f47b  8db884020000         lea edi, [eax + 0x284]
// 0044f481  eb02                 jmp 0x44f485
// 0044f483  33ff                 xor edi, edi
// 0044f485  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044f489  85f6                 test esi, esi
// 0044f48b  742a                 je 0x44f4b7
// 0044f48d  8d5604               lea edx, [esi + 4]
// 0044f490  83c8ff               or eax, 0xffffffff
// 0044f493  f00fc102             lock xadd dword ptr [edx], eax
// 0044f497  751e                 jne 0x44f4b7
// 0044f499  8b16                 mov edx, dword ptr [esi]
// 0044f49b  8b4204               mov eax, dword ptr [edx + 4]
// 0044f49e  8bce                 mov ecx, esi
// 0044f4a0  ffd0                 call eax
// 0044f4a2  8d4e08               lea ecx, [esi + 8]
// 0044f4a5  83caff               or edx, 0xffffffff
// 0044f4a8  f00fc111             lock xadd dword ptr [ecx], edx
// 0044f4ac  7509                 jne 0x44f4b7
// 0044f4ae  8b06                 mov eax, dword ptr [esi]
// 0044f4b0  8b5008               mov edx, dword ptr [eax + 8]
// 0044f4b3  8bce                 mov ecx, esi
// 0044f4b5  ffd2                 call edx
// 0044f4b7  8bc7                 mov eax, edi
// 0044f4b9  5f                   pop edi
// 0044f4ba  5e                   pop esi
// 0044f4bb  83c408               add esp, 8
// 0044f4be  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct Doc {
    char pad[0x188];
    void* field188;
};

struct App {
    Doc* getDoc();
};

extern "C" App* __cdecl GetApp();
extern "C" void __cdecl ReleaseDoc(Doc*);

void* VCRobloxDoc_VerbBinder_Release(RefCounted* p)
{
    Doc* doc = GetApp()->getDoc();
    void* result;
    if (doc->field188 != 0) {
        result = (char*)doc->field188 + 0x284;
    } else {
        result = 0;
    }
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refCount1, -1) == 1) {
            p->unknown1();
            if (_InterlockedExchangeAdd(&p->refCount2, -1) == 1) {
                p->unknown2();
            }
        }
    }
    return result;
}
