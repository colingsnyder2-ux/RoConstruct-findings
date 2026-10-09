// from server: 34% by colin
// roc 2007-08 00564750  unit: RBX::FollowCameraCommand  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00564750
//
// 00564750  51                   push ecx
// 00564751  56                   push esi
// 00564752  8bf1                 mov esi, ecx
// 00564754  6a01                 push 1
// 00564756  8d4e14               lea ecx, [esi + 0x14]
// 00564759  e8a2dbffff           call 0x562300
// 0056475e  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00564764  8b4804               mov ecx, dword ptr [eax + 4]
// 00564767  85c9                 test ecx, ecx
// 00564769  7439                 je 0x5647a4
// 0056476b  8b4008               mov eax, dword ptr [eax + 8]
// 0056476e  2bc1                 sub eax, ecx
// 00564770  c1f803               sar eax, 3
// 00564773  742f                 je 0x5647a4
// 00564775  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00564778  85c9                 test ecx, ecx
// 0056477a  7407                 je 0x564783
// 0056477c  e85fd1ffff           call 0x5618e0
// 00564781  eb02                 jmp 0x564785
// 00564783  33c0                 xor eax, eax
// 00564785  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 0056478b  85c9                 test ecx, ecx
// 0056478d  7415                 je 0x5647a4
// 0056478f  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 00564795  2bc1                 sub eax, ecx
// 00564797  c1f802               sar eax, 2
// 0056479a  83f801               cmp eax, 1
// 0056479d  7505                 jne 0x5647a4
// 0056479f  8ac0                 mov al, al
// 005647a1  5e                   pop esi
// 005647a2  59                   pop ecx
// 005647a3  c3                   ret 
// 005647a4  32c0                 xor al, al
// 005647a6  5e                   pop esi
// 005647a7  59                   pop ecx
// 005647a8  c3                   ret 

struct Sub1 {
    char pad[0x104];
    int* begin;
    int* end;
};

struct Sub2 {
    char pad[0xf8];
    int* begin;
    int* end;
};

struct Inner {
    char pad[0x14];
    Sub1* GetSub1(int);
};

struct Outer {
    char pad[0x20];
    Sub2* GetSub2();
};

struct FollowCameraCommand {
    char pad[0x14];
    Inner inner;
    char pad2[8];
    Outer* outer;
    bool method();
};

Sub1* Inner::GetSub1(int) { return 0; }
Sub2* Outer::GetSub2() { return 0; }

bool FollowCameraCommand::method()
{
    Sub1* s1 = this->inner.GetSub1(1);
    int* b = s1->begin;
    if (b == 0)
        return false;
    int* e = s1->end;
    if ((e - b) >> 3 == 0)
        return false;
    Outer* o = this->outer;
    Sub2* s2;
    if (o != 0)
        s2 = o->GetSub2();
    else
        s2 = 0;
    int* b2 = s2->begin;
    if (b2 == 0)
        return false;
    int* e2 = s2->end;
    if (((e2 - b2) >> 2) != 1)
        return false;
    return true;
}
