// from server: 67% by colin
// roc 2007-08 00443390  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443390
//
// 00443390  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 00443396  85c9                 test ecx, ecx
// 00443398  56                   push esi
// 00443399  8b742408             mov esi, dword ptr [esp + 8]
// 0044339d  7411                 je 0x4433b0
// 0044339f  8b460c               mov eax, dword ptr [esi + 0xc]
// 004433a2  8b4004               mov eax, dword ptr [eax + 4]
// 004433a5  83c004               add eax, 4
// 004433a8  50                   push eax
// 004433a9  e8f2b30f00           call 0x53e7a0
// 004433ae  eb02                 jmp 0x4433b2
// 004433b0  33c0                 xor eax, eax
// 004433b2  85c0                 test eax, eax
// 004433b4  741d                 je 0x4433d3
// 004433b6  8bc8                 mov ecx, eax
// 004433b8  e883feffff           call 0x443240
// 004433bd  85c0                 test eax, eax
// 004433bf  7412                 je 0x4433d3
// 004433c1  8b5604               mov edx, dword ptr [esi + 4]
// 004433c4  83c204               add edx, 4
// 004433c7  5e                   pop esi
// 004433c8  89542404             mov dword ptr [esp + 4], edx
// 004433cc  8bc8                 mov ecx, eax
// 004433ce  e9cdb30f00           jmp 0x53e7a0
// 004433d3  33c0                 xor eax, eax
// 004433d5  5e                   pop esi
// 004433d6  c20400               ret 4

struct PropBase {
    int field0;
    int field4;
    int field8;
    int fieldC;
};

struct Prop {
    char pad[0xE8];
    void* ptrE8;
    int method(int arg);
};

extern "C" void* __stdcall sub_53E7A0(void*);
extern "C" void* __fastcall sub_443240(void*);

int Prop::method(int arg)
{
    void* p = this->ptrE8;
    if (p != 0) {
        PropBase* b = *(PropBase**)(arg + 0xC);
        void* q = sub_53E7A0((char*)b->field4 + 4);
        if (q != 0) {
            void* r = sub_443240(q);
            if (r != 0) {
                void* s = (char*)(*(int*)(arg + 4)) + 4;
                return (int)sub_53E7A0(s);
            }
        }
    }
    return 0;
}
