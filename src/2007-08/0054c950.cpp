// from server: 36% by colin
// roc 2007-08 0054c950  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054c950
//
// 0054c950  8b442408             mov eax, dword ptr [esp + 8]
// 0054c954  53                   push ebx
// 0054c955  56                   push esi
// 0054c956  8b742418             mov esi, dword ptr [esp + 0x18]
// 0054c95a  03c6                 add eax, esi
// 0054c95c  57                   push edi
// 0054c95d  99                   cdq 
// 0054c95e  8bf8                 mov edi, eax
// 0054c960  8bda                 mov ebx, edx
// 0054c962  8bc6                 mov eax, esi
// 0054c964  99                   cdq 
// 0054c965  2bf8                 sub edi, eax
// 0054c967  1bda                 sbb ebx, edx
// 0054c969  8b542410             mov edx, dword ptr [esp + 0x10]
// 0054c96d  6a03                 push 3
// 0054c96f  03fe                 add edi, esi
// 0054c971  135c2424             adc ebx, dword ptr [esp + 0x24]
// 0054c975  6a00                 push 0
// 0054c977  53                   push ebx
// 0054c978  57                   push edi
// 0054c979  52                   push edx
// 0054c97a  e8e1f8ffff           call 0x54c260
// 0054c97f  5f                   pop edi
// 0054c980  5e                   pop esi
// 0054c981  5b                   pop ebx

extern "C" int __cdecl func_0054c260(int, int, int, int, int);

int __cdecl func_0054c950(int a, int b, int c, int d)
{
    int sum = a + d;
    int lo = sum;
    int hi = sum >> 31;
    int e = d;
    int ehi = e >> 31;
    lo -= e;
    hi -= ehi;
    lo += d;
    hi += c;
    return func_0054c260(b, lo, hi, 0, 3);
}
