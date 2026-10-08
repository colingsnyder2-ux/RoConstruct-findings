// from server: 61% by colin
// roc 2007-08 00604a40  unit: RBX::SleepStage  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604a40
//
// 00604a40  56                   push esi
// 00604a41  8bf1                 mov esi, ecx
// 00604a43  8b06                 mov eax, dword ptr [esi]
// 00604a45  8b5004               mov edx, dword ptr [eax + 4]
// 00604a48  ffd2                 call edx
// 00604a4a  83f804               cmp eax, 4
// 00604a4d  7412                 je 0x604a61
// 00604a4f  90                   nop 
// 00604a50  8b7608               mov esi, dword ptr [esi + 8]
// 00604a53  8b06                 mov eax, dword ptr [esi]
// 00604a55  8b5004               mov edx, dword ptr [eax + 4]
// 00604a58  8bce                 mov ecx, esi
// 00604a5a  ffd2                 call edx
// 00604a5c  83f804               cmp eax, 4
// 00604a5f  75ef                 jne 0x604a50
// 00604a61  8b442408             mov eax, dword ptr [esp + 8]
// 00604a65  50                   push eax
// 00604a66  8bce                 mov ecx, esi
// 00604a68  e8832e0200           call 0x6278f0
// 00604a6d  5e                   pop esi
// 00604a6e  c20400               ret 4

struct IWorldStage {
    virtual int getStageId();
};

struct SleepStage : IWorldStage {
    char pad[4];
    SleepStage* next;
    void stepSleepStage(int);
};

void SleepStage::stepSleepStage(int arg)
{
    SleepStage* s = this;
    while (s->getStageId() != 4) {
        s = s->next;
    }
    s->stepSleepStage(arg);
}
