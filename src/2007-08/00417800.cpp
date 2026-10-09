// from server: 48% by colin
// roc 2007-08 00417800  unit: Marshaller  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417800
//
// 00417800  6aff                 push -1
// 00417802  6899407400           push 0x744099
// 00417807  64a100000000         mov eax, dword ptr fs:[0]
// 0041780d  50                   push eax
// 0041780e  83ec44               sub esp, 0x44
// 00417811  a188518b00           mov eax, dword ptr [0x8b5188]
// 00417816  33c4                 xor eax, esp
// 00417818  50                   push eax
// 00417819  8d442448             lea eax, [esp + 0x48]
// 0041781d  64a300000000         mov dword ptr fs:[0], eax
// 00417823  6808657800           push 0x786508
// 00417828  8d4c2408             lea ecx, [esp + 8]
// 0041782c  ff1598e67700         call dword ptr [0x77e698]
// 00417832  8d442404             lea eax, [esp + 4]
// 00417836  50                   push eax
// 00417837  8d4c2424             lea ecx, [esp + 0x24]
// 0041783b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00417843  e878acfeff           call 0x4024c0
// 00417848  6878f78300           push 0x83f778
// 0041784d  8d4c2424             lea ecx, [esp + 0x24]
// 00417851  51                   push ecx
// 00417852  c74424286c4e7800     mov dword ptr [esp + 0x28], 0x784e6c
// 0041785a  e83f932100           call 0x630b9e

struct Marshaller {
    void construct();
};

extern "C" {
    void* __stdcall GetModuleHandleA(const char*);
    void* __stdcall GetProcAddress(void*, const char*);
    void __stdcall sub_4024C0(void*, void*);
    void __stdcall sub_630B9E(void*, void*);
}

void Marshaller::construct()
{
    char buf[68];
    void* h;
    void* p;

    h = GetModuleHandleA("MSVCP80.dll");
    p = GetProcAddress(h, "??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z");
    sub_4024C0(buf, 0);
    sub_630B9E(buf, (void*)0x83F778);
}
