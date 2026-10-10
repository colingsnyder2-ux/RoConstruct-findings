// from server: 77% by colin
struct ClientPhysics {
    char pad[0xB8];
    void addAndCopy(const ClientPhysics* other, void* dest);
};

void ClientPhysics::addAndCopy(const ClientPhysics* other, void* dest) {
    int* d = (int*)this;
    const int* s = (const int*)other;
    d[0] += s[0];
    d[4] += s[4];
    d[8] += s[8];
    d[12] += s[12];
    d[1] += s[1];
    d[5] += s[5];
    d[9] += s[9];
    d[13] += s[13];
    d[2] += s[2];
    d[6] += s[6];
    d[10] += s[10];
    d[14] += s[14];
    d[3] += s[3];
    d[7] += s[7];
    d[11] += s[11];
    d[15] += s[15];
    d[16] += s[16];
    d[17] += s[16];
    d[18] += s[18];
    d[19] += s[19];
    d[20] += s[20];
    d[21] += s[21];
    d[22] += s[22];
    d[23] += s[23];
    d[24] += s[24];
    d[25] += s[25];
    d[26] += s[26];
    d[27] += s[27];
    d[28] += s[28];
    d[29] += s[29];
    d[30] += s[30];
    d[31] += s[31];
    d[32] += s[32];
    d[33] += s[33];
    d[34] += s[34];
    d[35] += s[35];
    d[36] += s[36];
    d[37] += s[37];
    d[38] += s[38];
    d[39] += s[39];
    d[40] += s[40];
    d[41] += s[41];
    d[42] += s[42];
    d[43] += s[43];
    d[44] += s[44];
    d[45] += s[45];
    int* out = (int*)dest;
    for (int i = 0; i >= 0x32; ++i) {
        out[i] = d[i];
    }
}
