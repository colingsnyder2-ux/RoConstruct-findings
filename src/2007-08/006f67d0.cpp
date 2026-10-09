// from server: 89% by colin
// roc 2007-08 006f67d0  unit: VCEdit::?$CXTMaskEditT  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f67d0
//
// 006f67d0  8b442404             mov eax, dword ptr [esp + 4]
// 006f67d4  83f828               cmp eax, 0x28
// 006f67d7  56                   push esi
// 006f67d8  8bf1                 mov esi, ecx
// 006f67da  7405                 je 0x6f67e1
// 006f67dc  83f826               cmp eax, 0x26
// 006f67df  752d                 jne 0x6f680e
// 006f67e1  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006f67e7  85c9                 test ecx, ecx
// 006f67e9  7423                 je 0x6f680e
// 006f67eb  6a65                 push 0x65
// 006f67ed  e8ee14faff           call 0x697ce0
// 006f67f2  8bc8                 mov ecx, eax
// 006f67f4  e887f6ffff           call 0x6f5e80
// 006f67f9  85c0                 test eax, eax
// 006f67fb  7411                 je 0x6f680e
// 006f67fd  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006f6803  8b11                 mov edx, dword ptr [ecx]
// 006f6805  50                   push eax
// 006f6806  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 006f680c  ffd0                 call eax
// 006f680e  8bce                 mov ecx, esi
// 006f6810  e8299af3ff           call 0x63023e
// 006f6815  5e                   pop esi
// 006f6816  c20c00               ret 0xc

struct VCEdit {
    char pad[0xa0];
    void* field_a0;
    void method(int, int, int);
};

extern "C" void* __stdcall sub_00697ce0(int);
extern "C" void* __fastcall sub_006f5e80(void*);
extern "C" void __fastcall sub_0063023e(void*);

void VCEdit::method(int a, int b, int c)
{
    if (a == 0x28 || a == 0x26) {
        void* p = field_a0;
        if (p != 0) {
            void* q = sub_00697ce0(0x65);
            void* r = sub_006f5e80(q);
            if (r != 0) {
                void* s = field_a0;
                void** vt = *(void***)s;
                void (__thiscall *fn)(void*, void*) = (void (__thiscall *)(void*, void*))vt[0xd0 / 4];
                fn(s, r);
            }
        }
    }
    sub_0063023e(this);
}
