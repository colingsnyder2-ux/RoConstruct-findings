// from server: 17% by colin
struct DomResourceIcon;

struct IconHandle {
    const DomResourceIcon *m_domIcon;
    IconHandle(const DomResourceIcon *domIcon);
};

struct DomResourceIcon {
    unsigned short attributeTheme[0x200];
};

struct CXTIconHandle {
    char pad0[8];
    unsigned char *m_pOut;
    char pad1[8];
    int m_nOutPos;
    char pad2[0x1698 - 0x14];
    unsigned char *m_pIn;
    int m_nInSize;
    int m_nInPos;
    unsigned short m_nBitBuf;
    unsigned short m_nBitCount;
    int m_nBitPos;

    void Decode(const unsigned short *pTable, const unsigned short *pTable2);
};

extern const unsigned char g_7e4cc0[];
extern const unsigned char g_7e4dc0[];
extern const unsigned char g_7e4ec0[];
extern const int g_7e4678[];
extern const int g_7e4700[];
extern const int g_7e4fc0[];
extern const int g_7e5038[];

void CXTIconHandle::Decode(const unsigned short *pTable, const unsigned short *pTable2)
{
    int i;
    int nCount;
    unsigned int nBitPos;
    unsigned int nBitCount;
    unsigned short nBitBuf;
    unsigned char *pOut;
    int nOutPos;
    unsigned char *pIn;
    int nInSize;
    int nInPos;
    unsigned short nCode;
    unsigned short nSym;
    unsigned short nLen;
    unsigned short nExtra;
    int nExtraBits;
    unsigned int nShift;
    int nVal;
    int nIdx;
    int nBase;
    int nBits;
    unsigned short nTmp;
    unsigned char b0;
    unsigned char b1;

    nBitPos = this->m_nBitPos;
    nBitCount = this->m_nBitCount;
    nBitBuf = this->m_nBitBuf;
    pOut = this->m_pOut;
    nOutPos = this->m_nOutPos;
    pIn = this->m_pIn;
    nInSize = this->m_nInSize;
    nInPos = this->m_nInPos;

    if (nInSize == 0)
        goto tail;

    i = 0;
    do {
        nCode = pTable[i];
        nSym = pIn[i];
        i++;
        if (nCode == 0) {
            nLen = pTable2[nSym * 2 + 1];
            nExtraBits = 16 - nLen;
            if ((int)nBitCount > nExtraBits) {
                nVal = pTable2[nSym * 2];
                nShift = nBitCount;
                nBitBuf |= (unsigned short)(nVal << nShift);
                pOut[nOutPos] = (unsigned char)nBitBuf;
                nOutPos++;
                pOut[nOutPos] = (unsigned char)(nBitBuf >> 8);
                nOutPos++;
                nShift = 16 - nBitPos;
                nVal >>= nShift;
                nBitCount = nBitPos + nLen - 16;
                nBitBuf = (unsigned short)nVal;
            } else {
                nBitBuf |= (unsigned short)(pTable2[nSym * 2] << nBitCount);
                nBitCount += nLen;
            }
        } else {
            nIdx = g_7e4ec0[nSym];
            nLen = pTable[nIdx * 2 + 1 + 0x101];
            nExtraBits = 16 - nLen;
            if ((int)nBitCount > nExtraBits) {
                nVal = pTable[nIdx * 2 + 0x101];
                nShift = nBitCount;
                nBitBuf |= (unsigned short)(nVal << nShift);
                pOut[nOutPos] = (unsigned char)nBitBuf;
                nOutPos++;
                pOut[nOutPos] = (unsigned char)(nBitBuf >> 8);
                nOutPos++;
                nShift = 16 - nBitPos;
                nVal >>= nShift;
                nBitCount = nBitPos + nLen - 16;
                nBitBuf = (unsigned short)nVal;
            } else {
                nBitBuf |= (unsigned short)(pTable[nIdx * 2 + 0x101] << nBitCount);
                nBitCount += nLen;
            }
            nBase = g_7e4678[nIdx];
            if (nBase != 0) {
                nSym = (unsigned short)(nSym - g_7e4fc0[nIdx]);
                nExtraBits = 16 - nBase;
                if ((int)nBitCount > nExtraBits) {
                    nVal = nSym;
                    nShift = nBitCount;
                    nBitBuf |= (unsigned short)(nVal << nShift);
                    pOut[nOutPos] = (unsigned char)nBitBuf;
                    nOutPos++;
                    pOut[nOutPos] = (unsigned char)(nBitBuf >> 8);
                    nOutPos++;
                    nShift = 16 - nBitPos;
                    nVal >>= nShift;
                    nBitCount = nBitPos + nBase - 16;
                    nBitBuf = (unsigned short)nVal;
                } else {
                    nBitBuf |= (unsigned short)(nSym << nBitCount);
                    nBitCount += nBase;
                }
            }
            nCode--;
            if (nCode < 0x100)
                nIdx = g_7e4cc0[nCode];
            else
                nIdx = g_7e4dc0[nCode >> 7];
            nLen = pTable2[nIdx * 2 + 1];
            nExtraBits = 16 - nLen;
            if ((int)nBitCount > nExtraBits) {
                nVal = pTable2[nIdx * 2];
                nShift = nBitCount;
                nBitBuf |= (unsigned short)(nVal << nShift);
                pOut[nOutPos] = (unsigned char)nBitBuf;
                nOutPos++;
                pOut[nOutPos] = (unsigned char)(nBitBuf >> 8);
                nOutPos++;
                nShift = 16 - nBitPos;
                nVal >>= nShift;
                nBitCount = nBitPos + nLen - 16;
                nBitBuf = (unsigned short)nVal;
            } else {
                nBitBuf |= (unsigned short)(pTable2[nIdx * 2] << nBitCount);
                nBitCount += nLen;
            }
            nBase = g_7e4700[nIdx];
            if (nBase != 0) {
                nCode = (unsigned short)(nCode - g_7e5038[nIdx]);
                nExtraBits = 16 - nBase;
                if ((int)nBitCount > nExtraBits) {
                    nVal = nCode;
                    nShift = nBitCount;
                    nBitBuf |= (unsigned short)(nVal << nShift);
                    pOut[nOutPos] = (unsigned char)nBitBuf;
                    nOutPos++;
                    pOut[nOutPos] = (unsigned char)(nBitBuf >> 8);
                    nOutPos++;
                    nShift = 16 - nBitPos;
                    nVal >>= nShift;
                    nBitCount = nBitPos + nBase - 16;
                    nBitBuf = (unsigned short)nVal;
                } else {
                    nBitBuf |= (unsigned short)(nCode << nBitCount);
                    nBitCount += nBase;
                }
            }
        }
    } while (i < nInSize);

tail:
    nLen = pTable[0x201];
    nExtraBits = 16 - nLen;
    if ((int)nBitCount > nExtraBits) {
        nVal = pTable[0x200];
        nShift = nBitCount;
        nBitBuf |= (unsigned short)(nVal << nShift);
        pOut[nOutPos] = (unsigned char)nBitBuf;
        nOutPos++;
        pOut[nOutPos] = (unsigned char)(nBitBuf >> 8);
        nOutPos++;
        nShift = 16 - nBitPos;
        nVal >>= nShift;
        nBitCount = nBitPos + nLen - 16;
        nBitBuf = (unsigned short)nVal;
    } else {
        nBitBuf |= (unsigned short)(pTable[0x200] << nBitCount);
        nBitCount += nLen;
    }
    this->m_nBitPos = nBitCount;
    this->m_nBitBuf = nBitBuf;
    this->m_nOutPos = nOutPos;
}
