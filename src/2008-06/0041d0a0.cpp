// from server: 37% by colin
// from server: 36% by colin
// roc 2008-06 0041d0a0  unit: VDHTMLWindowService::?$FactoryProduct::Creator  size: 612 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041d0a0
//
// 0041d0a0  6aff                 push -1
// 0041d0a2  689de27b00           push 0x7be29d
// 0041d0a7  64a100000000         mov eax, dword ptr fs:[0]
// 0041d0ad  50                   push eax
// 0041d0ae  64892500000000       mov dword ptr fs:[0], esp
// 0041d0b5  83ec70               sub esp, 0x70
// 0041d0b8  53                   push ebx
// 0041d0b9  55                   push ebp
// 0041d0ba  56                   push esi
// 0041d0bb  57                   push edi
// 0041d0bc  894c2410             mov dword ptr [esp + 0x10], ecx
// 0041d0c0  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0041d0c7  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0041d0d2  85f6                 test esi, esi
// 0041d0d4  7534                 jne 0x41d10a
// 0041d0d6  6858f08000           push 0x80f058
// 0041d0db  8d4c2440             lea ecx, [esp + 0x40]
// 0041d0df  ff1558248000         call dword ptr [0x802458]
// 0041d0e5  8d44243c             lea eax, [esp + 0x3c]
// 0041d0e9  50                   push eax
// 0041d0ea  8d4c245c             lea ecx, [esp + 0x5c]
// 0041d0ee  c684248c00000003     mov byte ptr [esp + 0x8c], 3
// 0041d0f6  e855ccfeff           call 0x409d50
// 0041d0fb  68c81b8d00           push 0x8d1bc8
// 0041d100  8d4c245c             lea ecx, [esp + 0x5c]
// 0041d104  51                   push ecx
// 0041d105  e882442800           call 0x6a158c
// 0041d10a  8d942498000000       lea edx, [esp + 0x98]
// 0041d111  52                   push edx
// 0041d112  e869701300           call 0x554180
// 0041d117  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0041d11a  83c404               add esp, 4
// 0041d11d  50                   push eax
// 0041d11e  83c614               add esi, 0x14
// 0041d121  8d442424             lea eax, [esp + 0x24]
// 0041d125  50                   push eax
// 0041d126  83c108               add ecx, 8
// 0041d129  e8e2e81f00           call 0x61ba10
// 0041d12e  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0041d135  8b18                 mov ebx, dword ptr [eax]
// 0041d137  8b6804               mov ebp, dword ptr [eax + 4]
// 0041d13a  89742430             mov dword ptr [esp + 0x30], esi
// 0041d13e  8b711c               mov esi, dword ptr [ecx + 0x1c]
// 0041d141  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0041d144  895c2434             mov dword ptr [esp + 0x34], ebx
// 0041d148  896c2438             mov dword ptr [esp + 0x38], ebp
// 0041d14c  397e14               cmp dword ptr [esi + 0x14], edi
// 0041d14f  7606                 jbe 0x41d157
// 0041d151  ff1590288000         call dword ptr [0x802890]
// 0041d157  8b7608               mov esi, dword ptr [esi + 8]
// 0041d15a  85db                 test ebx, ebx
// 0041d15c  7404                 je 0x41d162
// 0041d15e  3bde                 cmp ebx, esi
// 0041d160  7406                 je 0x41d168
// 0041d162  ff1590288000         call dword ptr [0x802890]
// 0041d168  3bef                 cmp ebp, edi
// 0041d16a  7546                 jne 0x41d1b2
// 0041d16c  83ec1c               sub esp, 0x1c
// 0041d16f  8bfc                 mov edi, esp
// 0041d171  8d542458             lea edx, [esp + 0x58]
// 0041d175  6834f08000           push 0x80f034
// 0041d17a  b907000000           mov ecx, 7
// 0041d17f  8db424b8000000       lea esi, [esp + 0xb8]
// 0041d186  52                   push edx
// 0041d187  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0041d189  e882c90e00           call 0x509b10
// 0041d18e  83c424               add esp, 0x24
// 0041d191  50                   push eax
// 0041d192  8d4c245c             lea ecx, [esp + 0x5c]
// 0041d196  c684248c00000004     mov byte ptr [esp + 0x8c], 4
// 0041d19e  e8adcbfeff           call 0x409d50
// 0041d1a3  68c81b8d00           push 0x8d1bc8
// 0041d1a8  8d44245c             lea eax, [esp + 0x5c]
// 0041d1ac  50                   push eax
// 0041d1ad  e8da432800           call 0x6a158c
// 0041d1b2  8d4c2428             lea ecx, [esp + 0x28]
// 0041d1b6  51                   push ecx
// 0041d1b7  8d4c2434             lea ecx, [esp + 0x34]
// 0041d1bb  e8f0a2ffff           call 0x4174b0
// 0041d1c0  8b30                 mov esi, dword ptr [eax]
// 0041d1c2  83ec20               sub esp, 0x20
// 0041d1c5  89642434             mov dword ptr [esp + 0x34], esp
// 0041d1c9  8bdc                 mov ebx, esp
// 0041d1cb  33ed                 xor ebp, ebp
// 0041d1cd  55                   push ebp
// 0041d1ce  83ec38               sub esp, 0x38
// 0041d1d1  89642474             mov dword ptr [esp + 0x74], esp
// 0041d1d5  89642470             mov dword ptr [esp + 0x70], esp
// 0041d1d9  83ec1c               sub esp, 0x1c
// 0041d1dc  8d94242c010000       lea edx, [esp + 0x12c]
// 0041d1e3  8bcc                 mov ecx, esp
// 0041d1e5  89a42490000000       mov dword ptr [esp + 0x90], esp
// 0041d1ec  52                   push edx
// 0041d1ed  bf107d4100           mov edi, 0x417d10
// 0041d1f2  ff155c248000         call dword ptr [0x80245c]
// 0041d1f8  8b8c2408010000       mov ecx, dword ptr [esp + 0x108]
// 0041d1ff  56                   push esi
// 0041d200  83ec08               sub esp, 8
// 0041d203  8bc4                 mov eax, esp
// 0041d205  8908                 mov dword ptr [eax], ecx
// 0041d207  8b942418010000       mov edx, dword ptr [esp + 0x118]
// 0041d20e  895004               mov dword ptr [eax + 4], edx
// 0041d211  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0041d218  89a424a0000000       mov dword ptr [esp + 0xa0], esp
// 0041d21f  85c0                 test eax, eax
// 0041d221  740c                 je 0x41d22f
// 0041d223  83c004               add eax, 4
// 0041d226  b901000000           mov ecx, 1
// 0041d22b  f00fc108             lock xadd dword ptr [eax], ecx
// 0041d22f  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0041d236  83ec08               sub esp, 8
// 0041d239  8bd4                 mov edx, esp
// 0041d23b  89a424ac000000       mov dword ptr [esp + 0xac], esp
// 0041d242  50                   push eax
// 0041d243  52                   push edx
// 0041d244  c684241c01000006     mov byte ptr [esp + 0x11c], 6
// 0041d24c  e8efb71f00           call 0x618a40
// 0041d251  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 0041d258  83c408               add esp, 8
// 0041d25b  55                   push ebp
// 0041d25c  57                   push edi
// 0041d25d  51                   push ecx
// 0041d25e  c684242001000002     mov byte ptr [esp + 0x120], 2
// 0041d266  e8e5cbffff           call 0x419e50
// 0041d26b  83c43c               add esp, 0x3c
// 0041d26e  8bcb                 mov ecx, ebx
// 0041d270  e8ebfcffff           call 0x41cf60
// 0041d275  8b0d4ccc9600         mov ecx, dword ptr [0x96cc4c]
// 0041d27b  e8b0d2ffff           call 0x41a530
// 0041d280  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0041d287  c684248800000001     mov byte ptr [esp + 0x88], 1
// 0041d28f  85c0                 test eax, eax
// 0041d291  742c                 je 0x41d2bf
// 0041d293  8bf0                 mov esi, eax
// 0041d295  83c004               add eax, 4
// 0041d298  83caff               or edx, 0xffffffff
// 0041d29b  f00fc110             lock xadd dword ptr [eax], edx
// 0041d29f  751e                 jne 0x41d2bf
// 0041d2a1  8b06                 mov eax, dword ptr [esi]
// 0041d2a3  8b5004               mov edx, dword ptr [eax + 4]
// 0041d2a6  8bce                 mov ecx, esi
// 0041d2a8  ffd2                 call edx
// 0041d2aa  8d4608               lea eax, [esi + 8]
// 0041d2ad  83c9ff               or ecx, 0xffffffff
// 0041d2b0  f00fc108             lock xadd dword ptr [eax], ecx
// 0041d2b4  7509                 jne 0x41d2bf
// 0041d2b6  8b16                 mov edx, dword ptr [esi]
// 0041d2b8  8b4208               mov eax, dword ptr [edx + 8]
// 0041d2bb  8bce                 mov ecx, esi
// 0041d2bd  ffd0                 call eax
// 0041d2bf  8d8c2498000000       lea ecx, [esp + 0x98]
// 0041d2c6  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0041d2ce  ff1568248000         call dword ptr [0x802468]
// 0041d2d4  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 0041d2db  c7842488000000ffffffff mov dword ptr [esp + 0x88], 0xffffffff
// 0041d2e6  ff1568248000         call dword ptr [0x802468]
// 0041d2ec  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0041d2f3  5f                   pop edi
// 0041d2f4  5e                   pop esi
// 0041d2f5  5d                   pop ebp
// 0041d2f6  64890d00000000       mov dword ptr fs:[0], ecx
// 0041d2fd  5b                   pop ebx
// 0041d2fe  83c47c               add esp, 0x7c
// 0041d301  c24000               ret 0x40

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
    String(const char*);
    String(const String&);
    ~String();
};

struct SharedPtr {
    void* ptr;
    SharedPtr();
    SharedPtr(const SharedPtr&);
    __declspec(dllimport) ~SharedPtr() throw();
};

struct Instance {
    char pad[0x14];
    void* property;
    char pad2[4];
};

struct Creator {
    void* kind;
    unsigned int reserved;
    void* object;
    void construct(Instance*, SharedPtr);
};

extern void __cdecl func_00802458(void*, const char*);
extern void __cdecl func_0080245c(void*, void*);
extern void __cdecl func_00802468(void*);
extern void __cdecl func_00802890();
extern void __cdecl func_0080f034(void*);
extern void __cdecl func_0080f058(void*);
extern void __cdecl func_008d1bc8(void*);
extern void* __cdecl func_0096cc4c();

extern void __cdecl func_00409d50(void*, void*);
extern void __cdecl func_006a158c(void*, void*);
extern void* __cdecl func_00554180(void*);
extern void __cdecl func_0061ba10(void*, void*, void*);
extern void __cdecl func_00509b10(void*, void*, void*);
extern void __cdecl func_004174b0(void*, void*);
extern void __cdecl func_00419e50(void*, void*, void*, void*);
extern void __cdecl func_0041cf60(void*);
extern void __cdecl func_0041a530(void*);
extern void __cdecl func_00618a40(void*, void*, void*);
extern void __cdecl func_00417d10();

void Creator::construct(Instance* instance, SharedPtr sp)
{
    if (instance == 0) {
        String s1("The object to bind to must not be nil");
        String s2(s1);
        func_006a158c(&s2, &func_008d1bc8);
    }
    void* prop = func_00554180(&instance->property);
    void* p = instance->property;
    void* v = (char*)p + 8;
    void* out;
    func_0061ba10(v, &out, prop);
    void* a = *(void**)out;
    void* b = *(void**)((char*)out + 4);
    void* obj = instance->property;
    void* inner = *(void**)((char*)obj + 0x18);
    void* inner2 = *(void**)((char*)obj + 0x14);
    if ((unsigned int)inner2 > (unsigned int)inner) {
        func_00802890();
    }
    void* next = *(void**)((char*)obj + 8);
    if (a != 0 && a != next) {
        func_00802890();
    }
    if (b == inner) {
        String s3("Instance does not have property %s");
        func_00509b10(&s3, &func_0080f034, 0);
        func_006a158c(&s3, &func_008d1bc8);
    }
    void* r;
    func_004174b0(&r, &sp);
    void* esi = *(void**)r;
    func_00419e50(0, &func_00417d10, esi, 0);
    func_0041cf60(&sp);
    func_0041a530(&func_0096cc4c);
    if (sp.ptr != 0) {
        void* rc = sp.ptr;
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
            void** vt = *(void***)rc;
            ((void (__thiscall*)(void*))vt[1])(rc);
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void (__thiscall*)(void*))vt2[2])(rc);
            }
        }
    }
    func_00802468(&sp);
}
