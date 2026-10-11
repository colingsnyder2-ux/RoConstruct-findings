// from server: 44% by tester
struct Contact {
    char pad[0xc];
    void* connectors[1];
};

struct BlockBlockContact {
    char pad[0xc];
    void* blocks[1];

    int loadGeoPairEdgeEdge(int b0, int b1, int edge0, int edge1);
    int findGeoPairConnector(void* b0, void* b1, int pairType, int param0, int param1);
    int computeFeature(int id);
};

int BlockBlockContact::loadGeoPairEdgeEdge(int b0, int b1, int edge0, int edge1) {
    int ebx = edge0;
    int t = ebx & 0x80000001;
    if (t < 0) {
        ebx = ebx - 1;
        ebx = ebx | 0xfffffffe;
        ebx = ebx + 1;
    }
    int eax = edge0;
    int edx = eax >> 31;
    edx = edx & 3;
    eax = eax + edx;
    eax = eax >> 2;
    ebx = ebx + ebx * 2;
    ebx = ebx + eax;
    if (edge0 > 0xc) {
        eax = ebx + 3;
        edx = eax >> 31;
        int ecx = 6;
        eax = eax / ecx;
        edx = eax % ecx;
        ebx = edx;
    }

    int ebp = edge1;
    t = ebp & 0x80000001;
    if (t < 0) {
        ebp = ebp - 1;
        ebp = ebp | 0xfffffffe;
        ebp = ebp + 1;
    }
    eax = edge1;
    edx = eax >> 31;
    edx = edx & 3;
    eax = eax + edx;
    eax = eax >> 2;
    ebp = ebp + ebp * 2;
    ebp = ebp + eax;
    if (edge1 > 0xc) {
        eax = ebp + 3;
        edx = eax >> 31;
        int ecx = 6;
        eax = eax / ecx;
        edx = eax % ecx;
        ebp = edx;
    }

    int edx2 = b1;
    void* eax2 = this->blocks[edx2];
    int ecx2 = b0;
    void* edx3 = this->blocks[ecx2];
    eax2 = *(void**)((char*)eax2 + 0xa0);
    ecx2 = *(int*)((char*)edx3 + 0xa0);
    int r = this->findGeoPairConnector((void*)ecx2, (void*)eax2, 6, ebx, ebp);

    int ecx3 = b1;
    void* edx4 = this->blocks[ecx3];
    int ecx4 = *(int*)((char*)edx4 + 0x9c);
    int esi = r;
    int eax3 = edge1;
    int r2 = this->computeFeature(eax3);

    int ecx5 = b0;
    void* edx5 = this->blocks[ecx5];
    int ecx6 = *(int*)((char*)edx5 + 0x9c);
    int eax4 = edge0;
    int r3 = this->computeFeature(eax4);

    *(int*)((char*)esi + 0xc) = r3;
    *(int*)((char*)esi + 0x20) = ebx;
    *(int*)((char*)esi + 0x24) = ebp;
    *(int*)((char*)esi + 0x10) = r2;
    *(int*)((char*)esi + 8) = 6;
    return esi;
}
