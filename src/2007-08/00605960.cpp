// from server: 52% by colin
// roc 2007-08 00605960  unit: RBX::SleepStage  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605960
//
// 00605960  56                   push esi
// 00605961  57                   push edi
// 00605962  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00605966  8bf1                 mov esi, ecx
// 00605968  56                   push esi
// 00605969  8bcf                 mov ecx, edi
// 0060596b  e8c0370000           call 0x609130
// 00605970  57                   push edi
// 00605971  8bce                 mov ecx, esi
// 00605973  e878fdffff           call 0x6056f0
// 00605978  8b7f6c               mov edi, dword ptr [edi + 0x6c]
// 0060597b  85ff                 test edi, edi
// 0060597d  7408                 je 0x605987
// 0060597f  57                   push edi
// 00605980  8bce                 mov ecx, esi
// 00605982  e839fcffff           call 0x6055c0
// 00605987  5f                   pop edi
// 00605988  5e                   pop esi
// 00605989  c20400               ret 4

struct SleepStage {
    void stepSleepStage(int);
};

extern void func_00609130();
extern void func_006056f0();
extern void func_006055c0();

void SleepStage::stepSleepStage(int arg)
{
    func_00609130();
    func_006056f0();
    int* p = *(int**)((char*)this + 0x6c);
    if (p != 0) {
        func_006055c0();
    }
}
