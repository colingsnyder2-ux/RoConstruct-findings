// from server: 71% by colin
// roc 2007-08 0054afb0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054afb0
//
// 0054afb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054afb4  85c9                 test ecx, ecx
// 0054afb6  750a                 jne 0x54afc2
// 0054afb8  6805400080           push 0x80004005
// 0054afbd  e83e60ebff           call 0x401000
// 0054afc2  8b442404             mov eax, dword ptr [esp + 4]
// 0054afc6  8b00                 mov eax, dword ptr [eax]
// 0054afc8  51                   push ecx
// 0054afc9  50                   push eax
// 0054afca  ff1588e97700         call dword ptr [0x77e988]
// 0054afd0  83c408               add esp, 8
// 0054afd3  f7d8                 neg eax
// 0054afd5  1bc0                 sbb eax, eax
// 0054afd7  83c001               add eax, 1
// 0054afda  c3                   ret 

extern "C" int __cdecl _mbscmp(const unsigned char*, const unsigned char*);
extern "C" void __cdecl _com_issue_error(int);

int __cdecl sub_54AFB0(int* a, const unsigned char* b)
{
    if (b == 0)
        _com_issue_error(0x80004005);
    int r = _mbscmp((const unsigned char*)*a, b);
    return (r != 0) ? 0 : 1;
}
