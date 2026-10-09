// from server: 66% by colin
// roc 2007-08 00438dd0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438dd0
//
// 00438dd0  56                   push esi
// 00438dd1  8bf1                 mov esi, ecx
// 00438dd3  e866741f00           call 0x63023e
// 00438dd8  83f8ff               cmp eax, -1
// 00438ddb  7506                 jne 0x438de3
// 00438ddd  0bc0                 or eax, eax
// 00438ddf  5e                   pop esi
// 00438de0  c20400               ret 4
// 00438de3  6a06                 push 6
// 00438de5  8bce                 mov ecx, esi
// 00438de7  e894b72400           call 0x684580
// 00438dec  e8df512100           call 0x64dfd0
// 00438df1  83c004               add eax, 4
// 00438df4  50                   push eax
// 00438df5  ff15ecd27700         call dword ptr [0x77d2ec]
// 00438dfb  e8d0512100           call 0x64dfd0
// 00438e00  50                   push eax
// 00438e01  8bce                 mov ecx, esi
// 00438e03  e8c89c2400           call 0x682ad0
// 00438e08  33c0                 xor eax, eax
// 00438e0a  5e                   pop esi
// 00438e0b  c20400               ret 4

struct HVCXTPPropertyGridItemEnum {
    int f(int);
};

extern "C" int __stdcall sub_63023e();
extern "C" void __stdcall sub_684580(int);
extern "C" void* __stdcall sub_64dfd0();
extern "C" void __stdcall sub_682ad0(void*);
extern "C" long __stdcall InterlockedIncrement(long*);

int HVCXTPPropertyGridItemEnum::f(int a)
{
    int r = sub_63023e();
    if (r != -1) {
        return 0;
    }
    sub_684580(6);
    void* p = sub_64dfd0();
    InterlockedIncrement((long*)((char*)p + 4));
    void* q = sub_64dfd0();
    sub_682ad0(q);
    return 0;
}
