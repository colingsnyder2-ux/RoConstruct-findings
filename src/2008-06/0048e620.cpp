// from server: 100% by king_originala
// roc 2008-06 0048e620  unit: RBX::VRunService::?$SignalDesc  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048e620
//
// 0048e620  51                   push ecx
// 0048e621  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0048e625  8bc2                 mov eax, edx
// 0048e627  56                   push esi
// 0048e628  c744240400000000     mov dword ptr [esp + 4], 0
// 0048e630  8d7001               lea esi, [eax + 1]
// 0048e633  8a08                 mov cl, byte ptr [eax]
// 0048e635  40                   inc eax
// 0048e636  84c9                 test cl, cl
// 0048e638  75f9                 jne 0x48e633
// 0048e63a  2bc6                 sub eax, esi
// 0048e63c  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0048e640  03c2                 add eax, edx
// 0048e642  50                   push eax
// 0048e643  52                   push edx
// 0048e644  8bce                 mov ecx, esi
// 0048e646  e895f3ffff           call 0x48d9e0
// 0048e64b  8bc6                 mov eax, esi
// 0048e64d  5e                   pop esi
// 0048e64e  59                   pop ecx
// 0048e64f  c3                   ret 

extern "C" unsigned int __cdecl strlen(const char*);

struct S {
    void initialize(const char* first, const char* last);
};

S* __cdecl construct(S* destination, const char* text)
{
    volatile int unused = 0;
    destination->initialize(text, text + strlen(text));
    return destination;
}
