// from server: 81% by colin
// roc 2007-08 004b7820  unit: Exposer  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7820
//
// 004b7820  56                   push esi
// 004b7821  8bf1                 mov esi, ecx
// 004b7823  807e1400             cmp byte ptr [esi + 0x14], 0
// 004b7827  57                   push edi
// 004b7828  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004b782c  7417                 je 0x4b7845
// 004b782e  8b07                 mov eax, dword ptr [edi]
// 004b7830  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004b7833  3bc1                 cmp eax, ecx
// 004b7835  750e                 jne 0x4b7845
// 004b7837  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b783a  8b0e                 mov ecx, dword ptr [esi]
// 004b783c  5f                   pop edi
// 004b783d  8d44c104             lea eax, [ecx + eax*8 + 4]
// 004b7841  5e                   pop esi
// 004b7842  c20400               ret 4
// 004b7845  8d54240c             lea edx, [esp + 0xc]
// 004b7849  52                   push edx
// 004b784a  57                   push edi
// 004b784b  8bce                 mov ecx, esi
// 004b784d  e8fefdffff           call 0x4b7650
// 004b7852  8b16                 mov edx, dword ptr [esi]
// 004b7854  89460c               mov dword ptr [esi + 0xc], eax
// 004b7857  8b0f                 mov ecx, dword ptr [edi]
// 004b7859  5f                   pop edi
// 004b785a  894e10               mov dword ptr [esi + 0x10], ecx
// 004b785d  c6461401             mov byte ptr [esi + 0x14], 1
// 004b7861  8d44c204             lea eax, [edx + eax*8 + 4]
// 004b7865  5e                   pop esi
// 004b7866  c20400               ret 4

struct Exposer {
    void* field0;
    char pad[8];
    int fieldC;
    int field10;
    char field14;
    void* method(int* arg);
};

void* Exposer::method(int* arg)
{
    if (this->field14 != 0 && *arg == this->field10)
    {
        return (char*)this->field0 + this->fieldC * 8 + 4;
    }
    int result = (int)this->method(arg);
    this->fieldC = result;
    this->field10 = *arg;
    this->field14 = 1;
    return (char*)this->field0 + result * 8 + 4;
}
