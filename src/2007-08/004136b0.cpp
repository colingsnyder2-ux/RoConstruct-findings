// from server: 95% by colin
// roc 2007-08 004136b0  unit: std::runtime_error  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004136b0
//
// 004136b0  6aff                 push -1
// 004136b2  68d9a57300           push 0x73a5d9
// 004136b7  64a100000000         mov eax, dword ptr fs:[0]
// 004136bd  50                   push eax
// 004136be  51                   push ecx
// 004136bf  56                   push esi
// 004136c0  57                   push edi
// 004136c1  a188518b00           mov eax, dword ptr [0x8b5188]
// 004136c6  33c4                 xor eax, esp
// 004136c8  50                   push eax
// 004136c9  8d442410             lea eax, [esp + 0x10]
// 004136cd  64a300000000         mov dword ptr fs:[0], eax
// 004136d3  8bf1                 mov esi, ecx
// 004136d5  8974240c             mov dword ptr [esp + 0xc], esi
// 004136d9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004136dd  57                   push edi
// 004136de  ff1500e77700         call dword ptr [0x77e700]
// 004136e4  83c70c               add edi, 0xc
// 004136e7  57                   push edi
// 004136e8  8d4e0c               lea ecx, [esi + 0xc]
// 004136eb  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004136f3  c70618707800         mov dword ptr [esi], 0x787018
// 004136f9  ff159ce67700         call dword ptr [0x77e69c]
// 004136ff  8bc6                 mov eax, esi
// 00413701  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00413705  64890d00000000       mov dword ptr fs:[0], ecx
// 0041370c  59                   pop ecx
// 0041370d  5f                   pop edi
// 0041370e  5e                   pop esi
// 0041370f  83c410               add esp, 0x10
// 00413712  c20400               ret 4

struct std_exception {
    std_exception(const std_exception&);
    virtual ~std_exception();
    virtual const char* what() const;
};

struct std_string {
    std_string(const std_string&);
    ~std_string();
};

struct runtime_error : std_exception {
    std_string _Str;
    runtime_error(const runtime_error&);
    virtual ~runtime_error();
};

runtime_error::runtime_error(const runtime_error& other)
    : std_exception(other), _Str(other._Str)
{
}
