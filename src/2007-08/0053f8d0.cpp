// from server: 61% by colin
// roc 2007-08 0053f8d0  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053f8d0
//
// 0053f8d0  51                   push ecx
// 0053f8d1  56                   push esi
// 0053f8d2  57                   push edi
// 0053f8d3  6a20                 push 0x20
// 0053f8d5  8bf9                 mov edi, ecx
// 0053f8d7  e81a060f00           call 0x62fef6
// 0053f8dc  33f6                 xor esi, esi
// 0053f8de  83c404               add esp, 4
// 0053f8e1  3bc6                 cmp eax, esi
// 0053f8e3  741c                 je 0x53f901
// 0053f8e5  8b0d88228c00         mov ecx, dword ptr [0x8c2288]
// 0053f8eb  8930                 mov dword ptr [eax], esi
// 0053f8ed  897004               mov dword ptr [eax + 4], esi
// 0053f8f0  897008               mov dword ptr [eax + 8], esi
// 0053f8f3  897010               mov dword ptr [eax + 0x10], esi
// 0053f8f6  89480c               mov dword ptr [eax + 0xc], ecx
// 0053f8f9  897018               mov dword ptr [eax + 0x18], esi
// 0053f8fc  89701c               mov dword ptr [eax + 0x1c], esi
// 0053f8ff  8bf0                 mov esi, eax
// 0053f901  83ec08               sub esp, 8
// 0053f904  8bcc                 mov ecx, esp
// 0053f906  89642410             mov dword ptr [esp + 0x10], esp
// 0053f90a  57                   push edi
// 0053f90b  e820de0400           call 0x58d730
// 0053f910  a16c228c00           mov eax, dword ptr [0x8c226c]
// 0053f915  50                   push eax
// 0053f916  8bce                 mov ecx, esi
// 0053f918  e833fdffff           call 0x53f650
// 0053f91d  5f                   pop edi
// 0053f91e  8bc6                 mov eax, esi
// 0053f920  5e                   pop esi
// 0053f921  59                   pop ecx
// 0053f922  c3                   ret 

struct AbstractFactoryProduct {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
    void* field18;
    void* field1C;
};

extern "C" void* __cdecl sub_62FEF6(unsigned int);
extern "C" void __cdecl sub_58D730(void*, void*);
extern "C" void __cdecl sub_53F650(void*, void*);

extern void* g_8c2288;
extern void* g_8c226c;

struct VInstance {
    void* method();
};

void* VInstance::method() {
    AbstractFactoryProduct* p = (AbstractFactoryProduct*)sub_62FEF6(0x20);
    AbstractFactoryProduct* result = 0;
    if (p != 0) {
        p->field0 = 0;
        p->field4 = 0;
        p->field8 = 0;
        p->field10 = 0;
        p->fieldC = g_8c2288;
        p->field18 = 0;
        p->field1C = 0;
        result = p;
    }
    void* tmp[2];
    sub_58D730(tmp, this);
    sub_53F650(result, g_8c226c);
    return result;
}
