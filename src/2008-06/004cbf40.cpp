// from server: 100% by king_originala
// roc 2008-06 004cbf40  unit: RBX::VInstance::?$NonFactoryProduct  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cbf40
//
// 004cbf40  53                   push ebx
// 004cbf41  56                   push esi
// 004cbf42  8bf1                 mov esi, ecx
// 004cbf44  57                   push edi
// 004cbf45  85f6                 test esi, esi
// 004cbf47  7405                 je 0x4cbf4e
// 004cbf49  8d46f4               lea eax, [esi - 0xc]
// 004cbf4c  eb02                 jmp 0x4cbf50
// 004cbf4e  33c0                 xor eax, eax
// 004cbf50  8b5804               mov ebx, dword ptr [eax + 4]
// 004cbf53  85f6                 test esi, esi
// 004cbf55  7405                 je 0x4cbf5c
// 004cbf57  8d46f4               lea eax, [esi - 0xc]
// 004cbf5a  eb02                 jmp 0x4cbf5e
// 004cbf5c  33c0                 xor eax, eax
// 004cbf5e  8b5004               mov edx, dword ptr [eax + 4]
// 004cbf61  85f6                 test esi, esi
// 004cbf63  7405                 je 0x4cbf6a
// 004cbf65  8d46f4               lea eax, [esi - 0xc]
// 004cbf68  eb02                 jmp 0x4cbf6c
// 004cbf6a  33c0                 xor eax, eax
// 004cbf6c  8b4004               mov eax, dword ptr [eax + 4]
// 004cbf6f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cbf73  83c060               add eax, 0x60
// 004cbf76  85ff                 test edi, edi
// 004cbf78  7405                 je 0x4cbf7f
// 004cbf7a  8d4f60               lea ecx, [edi + 0x60]
// 004cbf7d  eb02                 jmp 0x4cbf81
// 004cbf7f  33c9                 xor ecx, ecx
// 004cbf81  83c368               add ebx, 0x68
// 004cbf84  53                   push ebx
// 004cbf85  83c264               add edx, 0x64
// 004cbf88  52                   push edx
// 004cbf89  50                   push eax
// 004cbf8a  51                   push ecx
// 004cbf8b  e850aaffff           call 0x4c69e0
// 004cbf90  83c410               add esp, 0x10
// 004cbf93  57                   push edi
// 004cbf94  8bce                 mov ecx, esi
// 004cbf96  e8b5f8ffff           call 0x4cb850
// 004cbf9b  5f                   pop edi
// 004cbf9c  5e                   pop esi
// 004cbf9d  5b                   pop ebx
// 004cbf9e  c20400               ret 4

extern "C" void __cdecl transfer(char*, char*, char*, char*);

struct Prefix {
    unsigned long reserved;
    char* data;
    unsigned long padding;
};

struct S {
    unsigned long reserved;
    void update(char*);
    long assign(char*);
};

struct Owner : Prefix, S {
};

void S::update(char* value)
{
    char* third = static_cast<Owner*>(this)->data;
    char* second = static_cast<Owner*>(this)->data;
    char* first = static_cast<Owner*>(this)->data + 0x60;
    char* destination = value ? value + 0x60 : 0;

    transfer(destination, first, second + 0x64, third + 0x68);
    assign(value);
}
