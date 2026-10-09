// from server: 67% by colin
// roc 2007-08 00443340  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00443340
//
// 00443340  8b89e8000000         mov ecx, dword ptr [ecx + 0xe8]
// 00443346  85c9                 test ecx, ecx
// 00443348  56                   push esi
// 00443349  8b742408             mov esi, dword ptr [esp + 8]
// 0044334d  7411                 je 0x443360
// 0044334f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00443352  8b4004               mov eax, dword ptr [eax + 4]
// 00443355  83c004               add eax, 4
// 00443358  50                   push eax
// 00443359  e842b40f00           call 0x53e7a0
// 0044335e  eb02                 jmp 0x443362
// 00443360  33c0                 xor eax, eax
// 00443362  85c0                 test eax, eax
// 00443364  741d                 je 0x443383
// 00443366  8bc8                 mov ecx, eax
// 00443368  e853feffff           call 0x4431c0
// 0044336d  85c0                 test eax, eax
// 0044336f  7412                 je 0x443383
// 00443371  8b5604               mov edx, dword ptr [esi + 4]
// 00443374  83c204               add edx, 4
// 00443377  5e                   pop esi
// 00443378  89542404             mov dword ptr [esp + 4], edx
// 0044337c  8bc8                 mov ecx, eax
// 0044337e  e91db40f00           jmp 0x53e7a0
// 00443383  33c0                 xor eax, eax
// 00443385  5e                   pop esi
// 00443386  c20400               ret 4

struct Prop;

struct Arg
{
    char pad0[4];
    void* ptr4;
    char pad8[4];
    void* ptrC;
};

struct Descriptor
{
    char pad[0xe8];
    Prop* prop;
    void* method(Arg* arg);
};

extern "C" void* __stdcall sub_53e7a0(void*);
extern "C" void* __fastcall sub_4431c0(Prop*);

void* Descriptor::method(Arg* arg)
{
    Prop* p = this->prop;
    void* result;
    if (p != 0)
    {
        void* v = arg->ptrC;
        void* v2 = *(void**)((char*)v + 4);
        result = sub_53e7a0((char*)v2 + 4);
    }
    else
    {
        result = 0;
    }
    if (result != 0)
    {
        void* r = sub_4431c0((Prop*)result);
        if (r != 0)
        {
            void* v = arg->ptr4;
            void* v2 = (char*)v + 4;
            return sub_53e7a0(v2);
        }
    }
    return 0;
}
