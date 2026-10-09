// from server: 69% by colin
// roc 2007-08 00592540  unit: RBX::VVisit::?$FactoryProduct  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592540
//
// 00592540  8b442408             mov eax, dword ptr [esp + 8]
// 00592544  83f802               cmp eax, 2
// 00592547  56                   push esi
// 00592548  7518                 jne 0x592562
// 0059254a  8b742408             mov esi, dword ptr [esp + 8]
// 0059254e  56                   push esi
// 0059254f  b998468a00           mov ecx, 0x8a4698
// 00592554  ff1508e77700         call dword ptr [0x77e708]
// 0059255a  f6d8                 neg al
// 0059255c  1bc0                 sbb eax, eax
// 0059255e  23c6                 and eax, esi
// 00592560  5e                   pop esi
// 00592561  c3                   ret 
// 00592562  85c0                 test eax, eax
// 00592564  751b                 jne 0x592581
// 00592566  6a24                 push 0x24
// 00592568  e889d90900           call 0x62fef6
// 0059256d  8bf0                 mov esi, eax
// 0059256f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00592573  50                   push eax
// 00592574  56                   push esi
// 00592575  e886fdffff           call 0x592300
// 0059257a  83c40c               add esp, 0xc
// 0059257d  8bc6                 mov eax, esi
// 0059257f  5e                   pop esi
// 00592580  c3                   ret 
// 00592581  8b742408             mov esi, dword ptr [esp + 8]
// 00592585  8d4e04               lea ecx, [esi + 4]
// 00592588  ff15ace67700         call dword ptr [0x77e6ac]
// 0059258e  56                   push esi
// 0059258f  e8ced60900           call 0x62fc62
// 00592594  83c404               add esp, 4
// 00592597  33c0                 xor eax, eax
// 00592599  5e                   pop esi
// 0059259a  c3                   ret 

struct RBXName
{
    void* ptr;
};

struct FactoryProduct
{
    static void* creators;
    static void* classDesc;

    static void* createByName(int arg);
    static void* createInstance(int arg);
    static void destroyInstance(void* p);
};

void* FactoryProduct::createByName(int arg)
{
    return 0;
}

void* FactoryProduct::createInstance(int arg)
{
    return 0;
}

void FactoryProduct::destroyInstance(void* p)
{
}

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl operator_delete(void* p);

extern "C" bool __stdcall type_info_equal(const void* a, const void* b);

void* FactoryProduct_create(int selector, int arg)
{
    if (selector == 2)
    {
        void* p = (void*)arg;
        bool eq = type_info_equal(&FactoryProduct::classDesc, p);
        return eq ? p : 0;
    }
    else if (selector == 0)
    {
        void* mem = operator_new(0x24);
        FactoryProduct::createInstance(arg);
        return mem;
    }
    else
    {
        void* p = (void*)arg;
        FactoryProduct::destroyInstance(p);
        operator_delete(p);
        return 0;
    }
}
