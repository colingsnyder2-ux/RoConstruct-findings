// from server: 67% by colin
// roc 2007-08 004433e0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004433e0
//
// 004433e0  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 004433e6  85c9                 test ecx, ecx
// 004433e8  56                   push esi
// 004433e9  8b742408             mov esi, dword ptr [esp + 8]
// 004433ed  7411                 je 0x443400
// 004433ef  8b460c               mov eax, dword ptr [esi + 0xc]
// 004433f2  8b4004               mov eax, dword ptr [eax + 4]
// 004433f5  83c004               add eax, 4
// 004433f8  50                   push eax
// 004433f9  e8a2b30f00           call 0x53e7a0
// 004433fe  eb02                 jmp 0x443402
// 00443400  33c0                 xor eax, eax
// 00443402  85c0                 test eax, eax
// 00443404  741d                 je 0x443423
// 00443406  8bc8                 mov ecx, eax
// 00443408  e8b3feffff           call 0x4432c0
// 0044340d  85c0                 test eax, eax
// 0044340f  7412                 je 0x443423
// 00443411  8b5604               mov edx, dword ptr [esi + 4]
// 00443414  83c204               add edx, 4
// 00443417  5e                   pop esi
// 00443418  89542404             mov dword ptr [esp + 4], edx
// 0044341c  8bc8                 mov ecx, eax
// 0044341e  e97db30f00           jmp 0x53e7a0
// 00443423  33c0                 xor eax, eax
// 00443425  5e                   pop esi
// 00443426  c20400               ret 4

struct PropBase {
    char pad[0xe8];
    void* field_e8;
};

struct ArgType {
    char pad[0xc];
    void* field_c;
};

struct ArgHolder {
    char pad[4];
    void* field_4;
};

extern "C" void* __stdcall sub_53e7a0(void*);
extern "C" void* __fastcall sub_4432c0(void*);

struct S {
    void* f(void* arg);
};

void* S::f(void* arg)
{
    PropBase* self = (PropBase*)this;
    void* p = self->field_e8;
    void* r;
    if (p != 0) {
        ArgType* a = (ArgType*)arg;
        void* q = a->field_c;
        void* v = *(void**)((char*)q + 4);
        r = sub_53e7a0((char*)v + 4);
    } else {
        r = 0;
    }
    if (r != 0) {
        void* s = sub_4432c0(r);
        if (s != 0) {
            ArgHolder* h = (ArgHolder*)arg;
            void* t = (char*)h->field_4 + 4;
            return sub_53e7a0(t);
        }
    }
    return 0;
}
