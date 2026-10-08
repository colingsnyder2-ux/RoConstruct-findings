// from server: 87% by colin
// roc 2007-08 0044d410  unit: ReportAbuseVerb  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044d410
//
// 0044d410  e8ed2a1e00           call 0x62ff02
// 0044d415  8b4004               mov eax, dword ptr [eax + 4]
// 0044d418  8b4020               mov eax, dword ptr [eax + 0x20]
// 0044d41b  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0044d41e  6a00                 push 0
// 0044d420  6800810000           push 0x8100
// 0044d425  6811010000           push 0x111
// 0044d42a  51                   push ecx
// 0044d42b  ff15d0ec7700         call dword ptr [0x77ecd0]
// 0044d431  c20400               ret 4

extern "C" void* __stdcall sub_0062FF02();
extern "C" int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct ReportAbuseVerb
{
    void method(int);
};

void ReportAbuseVerb::method(int)
{
    char* p = (char*)sub_0062FF02();
    int* q = *(int**)(p + 4);
    int* r = *(int**)((char*)q + 0x20);
    int h = *(int*)((char*)r + 0x20);
    PostMessageA((void*)h, 0x111, 0x8100, 0);
}
