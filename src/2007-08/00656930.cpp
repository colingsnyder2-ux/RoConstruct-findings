// from server: 88% by colin
// roc 2007-08 00656930  unit: CXTPReportControl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656930
//
// 00656930  56                   push esi
// 00656931  8b742408             mov esi, dword ptr [esp + 8]
// 00656935  817e0400010000       cmp dword ptr [esi + 4], 0x100
// 0065693c  57                   push edi
// 0065693d  8bf9                 mov edi, ecx
// 0065693f  7528                 jne 0x656969
// 00656941  0fb74e0e             movzx ecx, word ptr [esi + 0xe]
// 00656945  0fb7560c             movzx edx, word ptr [esi + 0xc]
// 00656949  8b07                 mov eax, dword ptr [edi]
// 0065694b  51                   push ecx
// 0065694c  52                   push edx
// 0065694d  8b90b0010000         mov edx, dword ptr [eax + 0x1b0]
// 00656953  8d4e08               lea ecx, [esi + 8]
// 00656956  51                   push ecx
// 00656957  8bcf                 mov ecx, edi
// 00656959  ffd2                 call edx
// 0065695b  85c0                 test eax, eax
// 0065695d  750a                 jne 0x656969
// 0065695f  5f                   pop edi
// 00656960  b801000000           mov eax, 1
// 00656965  5e                   pop esi
// 00656966  c20400               ret 4
// 00656969  56                   push esi
// 0065696a  8bcf                 mov ecx, edi
// 0065696c  e8fd98fdff           call 0x63026e
// 00656971  5f                   pop edi
// 00656972  5e                   pop esi
// 00656973  c20400               ret 4

struct CXTPReportControl {
    int sub_63026E(void*);
    int method(void*);
};

int CXTPReportControl::method(void* arg) {
    unsigned short* p = (unsigned short*)arg;
    if (*(int*)((char*)arg + 4) == 0x100) {
        unsigned short a = *(unsigned short*)((char*)arg + 0xe);
        unsigned short b = *(unsigned short*)((char*)arg + 0xc);
        int (CXTPReportControl::*fn)(void*, unsigned short, unsigned short);
        void** vt = *(void***)this;
        typedef int (CXTPReportControl::*MFP)(void*, unsigned short, unsigned short);
        MFP m = *(MFP*)((char*)vt + 0x1b0);
        int r = (this->*m)((char*)arg + 8, b, a);
        if (r == 0)
            return 1;
    }
    return sub_63026E(arg);
}
