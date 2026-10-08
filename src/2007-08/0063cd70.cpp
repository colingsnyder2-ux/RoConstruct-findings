// from server: 87% by colin
// roc 2007-08 0063cd70  unit: CRobloxControlColorSelector  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cd70
//
// 0063cd70  8b442404             mov eax, dword ptr [esp + 4]
// 0063cd74  83f83e               cmp eax, 0x3e
// 0063cd77  7717                 ja 0x63cd90
// 0063cd79  8d444051             lea eax, [eax + eax*2 + 0x51]
// 0063cd7d  8d0481               lea eax, [ecx + eax*4]
// 0063cd80  8b4808               mov ecx, dword ptr [eax + 8]
// 0063cd83  83f9ff               cmp ecx, -1
// 0063cd86  7506                 jne 0x63cd8e
// 0063cd88  8b4004               mov eax, dword ptr [eax + 4]
// 0063cd8b  c20400               ret 4
// 0063cd8e  8bc1                 mov eax, ecx
// 0063cd90  c20400               ret 4

struct CRobloxControlColorSelector {
    int getValue(int index);
};

int CRobloxControlColorSelector::getValue(int index)
{
    if ((unsigned)index > 0x3e)
        return -1;
    int* p = (int*)((char*)this + (index * 3 + 0x51) * 4);
    int v = p[2];
    if (v != -1)
        return p[1];
    return v;
}
