// from server: 100% by king_originala
// roc 2008-06 00590d00  unit: RBX::RootInstance  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590d00
//
// 00590d00  53                   push ebx
// 00590d01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00590d05  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00590d08  56                   push esi
// 00590d09  8bf1                 mov esi, ecx
// 00590d0b  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00590d0e  2bc8                 sub ecx, eax
// 00590d10  83e1f8               and ecx, 0xfffffff8
// 00590d13  57                   push edi
// 00590d14  83f908               cmp ecx, 8
// 00590d17  753f                 jne 0x590d58
// 00590d19  8b38                 mov edi, dword ptr [eax]
// 00590d1b  6a00                 push 0
// 00590d1d  68a0969400           push 0x9496a0
// 00590d22  687c909200           push 0x92907c
// 00590d27  6a00                 push 0
// 00590d29  57                   push edi
// 00590d2a  e8970a1100           call 0x6a17c6
// 00590d2f  83c414               add esp, 0x14
// 00590d32  85c0                 test eax, eax
// 00590d34  7422                 je 0x590d58
// 00590d36  56                   push esi
// 00590d37  e8449ff0ff           call 0x49ac80
// 00590d3c  83c404               add esp, 4
// 00590d3f  85c0                 test eax, eax
// 00590d41  7415                 je 0x590d58
// 00590d43  8bc8                 mov ecx, eax
// 00590d45  e826b7efff           call 0x48c470
// 00590d4a  50                   push eax
// 00590d4b  8bcf                 mov ecx, edi
// 00590d4d  e89e9bfcff           call 0x55a8f0
// 00590d52  5f                   pop edi
// 00590d53  5e                   pop esi
// 00590d54  5b                   pop ebx
// 00590d55  c20800               ret 8
// 00590d58  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00590d5c  57                   push edi
// 00590d5d  56                   push esi
// 00590d5e  53                   push ebx
// 00590d5f  8bce                 mov ecx, esi
// 00590d61  e8daf6ffff           call 0x590440
// 00590d66  57                   push edi
// 00590d67  8bce                 mov ecx, esi
// 00590d69  e8e2fdffff           call 0x590b50
// 00590d6e  5f                   pop edi
// 00590d6f  5e                   pop esi
// 00590d70  5b                   pop ebx
// 00590d71  c20800               ret 8

struct Object {
    void apply(void*);
};

struct Entry {
    Object* object;
    void* ownership;
};

struct Arguments {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct Service {
    void* value();
};

extern "C" void* __cdecl findService(void*);
extern "C" void* __cdecl castObject(void*, int, const void*, const void*, int);

extern const char instanceType[];
extern const char hopperBinType[];

struct Root {
    void dispatch(Arguments*, void*);
    void fallback(Arguments*, Root*, void*);
    void finish(void*);
};

void Root::dispatch(Arguments* args, void* context)
{
    if (((unsigned int)args->last - (unsigned int)args->first) / 8 == 1) {
        Object* object = args->first->object;
        if (castObject(object, 0, instanceType, hopperBinType, 0)) {
            Service* service = (Service*)findService(this);
            if (service) {
                object->apply(service->value());
                return;
            }
        }
    }

    fallback(args, this, context);
    finish(context);
}
