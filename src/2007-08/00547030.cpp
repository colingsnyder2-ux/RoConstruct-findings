// from server: 45% by colin
// roc 2007-08 00547030  unit: RBX::MD5HasherImpl  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00547030
//
// 00547030  8b442414             mov eax, dword ptr [esp + 0x14]
// 00547034  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00547038  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0054703c  56                   push esi
// 0054703d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00547041  57                   push edi
// 00547042  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00547046  57                   push edi
// 00547047  50                   push eax
// 00547048  51                   push ecx
// 00547049  52                   push edx
// 0054704a  8d442428             lea eax, [esp + 0x28]
// 0054704e  56                   push esi
// 0054704f  50                   push eax
// 00547050  e83befffff           call 0x545f90
// 00547055  8b08                 mov ecx, dword ptr [eax]
// 00547057  8b7804               mov edi, dword ptr [eax + 4]
// 0054705a  83c418               add esp, 0x18
// 0054705d  3bf1                 cmp esi, ecx
// 0054705f  7406                 je 0x547067
// 00547061  ff15d8e67700         call dword ptr [0x77e6d8]
// 00547067  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054706b  897804               mov dword ptr [eax + 4], edi
// 0054706e  5f                   pop edi
// 0054706f  8930                 mov dword ptr [eax], esi
// 00547071  5e                   pop esi
// 00547072  c3                   ret 

struct MD5HasherImpl
{
    void addData(const char* data, unsigned int nBytes);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

extern "C" void* __cdecl func_00545f90(void* dst, const char* data, unsigned int nBytes, int a, int b, int c);

void MD5HasherImpl::addData(const char* data, unsigned int nBytes)
{
    char* result[2];
    func_00545f90(result, data, nBytes, 0, 0, 0);
    char* p = result[0];
    char* q = result[1];
    if (data != p)
    {
        _invalid_parameter_noinfo();
    }
    *(char**)((char*)this + 0) = (char*)data;
    *(char**)((char*)this + 4) = q;
}
