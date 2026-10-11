// from server: 53% by atomic.potato
// roc 2009-06 00633c20  unit: RBX::VScriptContext::?$FactoryProduct  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633c20
//
// 00633c20  56                   push esi
// 00633c21  8b742408             mov esi, dword ptr [esp + 8]
// 00633c25  8b06                 mov eax, dword ptr [esi]
// 00633c27  6a00                 push 0
// 00633c29  6840be9d00           push 0x9dbe40
// 00633c2e  68c4bf9d00           push 0x9dbfc4
// 00633c33  6a00                 push 0
// 00633c35  50                   push eax
// 00633c36  e83f600e00           call 0x719c7a
// 00633c3b  83c414               add esp, 0x14
// 00633c3e  85c0                 test eax, eax
// 00633c40  7436                 je 0x633c78
// 00633c42  83786c10             cmp dword ptr [eax + 0x6c], 0x10
// 00633c46  7218                 jb 0x633c60
// 00633c48  8b4058               mov eax, dword ptr [eax + 0x58]
// 00633c4b  50                   push eax
// 00633c4c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00633c50  50                   push eax
// 00633c51  e86a570800           call 0x6b93c0
// 00633c56  83c408               add esp, 8
// 00633c59  b801000000           mov eax, 1
// 00633c5e  5e                   pop esi
// 00633c5f  c3                   ret 
// 00633c60  83c058               add eax, 0x58
// 00633c63  50                   push eax
// 00633c64  8b442410             mov eax, dword ptr [esp + 0x10]
// 00633c68  50                   push eax
// 00633c69  e852570800           call 0x6b93c0
// 00633c6e  83c408               add esp, 8
// 00633c71  b801000000           mov eax, 1
// 00633c76  5e                   pop esi
// 00633c77  c3                   ret 
// 00633c78  8b0e                 mov ecx, dword ptr [esi]
// 00633c7a  8b5104               mov edx, dword ptr [ecx + 4]
// 00633c7d  8b4204               mov eax, dword ptr [edx + 4]
// 00633c80  83781810             cmp dword ptr [eax + 0x18], 0x10
// 00633c84  7218                 jb 0x633c9e
// 00633c86  8b4004               mov eax, dword ptr [eax + 4]
// 00633c89  50                   push eax
// 00633c8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00633c8e  50                   push eax
// 00633c8f  e82c570800           call 0x6b93c0
// 00633c94  83c408               add esp, 8
// 00633c97  b801000000           mov eax, 1
// 00633c9c  5e                   pop esi
// 00633c9d  c3                   ret 
// 00633c9e  83c004               add eax, 4
// 00633ca1  50                   push eax
// 00633ca2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00633ca6  50                   push eax
// 00633ca7  e814570800           call 0x6b93c0
// 00633cac  83c408               add esp, 8
// 00633caf  b801000000           mov eax, 1
// 00633cb4  5e                   pop esi
// 00633cb5  c3                   ret 

struct Inner {
    char pad0[4];
    char pad1[0x14];
    int len;
    char pad2[0x38];
    char data[4];
};

struct Mid {
    char pad0[4];
    Inner* inner;
};

struct Outer {
    char pad0[4];
    Mid* mid;
};

extern "C" void __stdcall sub_6b93c0(void* dst, const void* src);
extern "C" void* __stdcall sub_719c7a(void* a, void* b, void* c, void* d, void* e);

struct S {
};

int __cdecl f(void* arg) {
    Outer* o = (Outer*)arg;
    void* r = sub_719c7a(*(void**)o, 0, (void*)0x9dbfc4, (void*)0x9dbe40, 0);
    if (r != 0) {
        Inner* in = (Inner*)r;
        if (in->len >= 0x10) {
            sub_6b93c0(*(void**)((char*)arg + 4), in->data);
        } else {
            sub_6b93c0(*(void**)((char*)arg + 4), &in->len);
        }
        return 1;
    }
    Mid* m = o->mid;
    Inner* in2 = m->inner;
    if (in2->len >= 0x10) {
        sub_6b93c0(*(void**)((char*)arg + 4), in2->data);
    } else {
        sub_6b93c0(*(void**)((char*)arg + 4), &in2->len);
    }
    return 1;
}
