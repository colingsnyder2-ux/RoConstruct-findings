// from server: 52% by colin
struct VCContent_CComAggObject
{
    int FormatMessage(unsigned int* pOutLen, char* pOut, unsigned int cch, const char* psz);
};

extern "C" int __stdcall sub_00401000(int hr);

int VCContent_CComAggObject::FormatMessage(unsigned int* pOutLen, char* pOut, unsigned int cch, const char* psz)
{
    const char* p = psz;
    char* out = pOut;
    unsigned int i = 0;
    int ok = 1;

    if (p == 0)
    {
        sub_00401000(0x80004005);
    }
    if (out == 0)
    {
        sub_00401000(0x80004005);
    }

    if (*p == 0)
    {
        goto done;
    }

    for (;;)
    {
        if (i == cch)
        {
            ok = 0;
            goto advance;
        }
        if (!ok)
        {
            goto advance;
        }
        if (*p == '%')
        {
            if (p[1] == 0 || p[2] == 0)
            {
                ok = 0;
                goto finish;
            }

            {
                unsigned char c1 = (unsigned char)p[1];
                int v1;
                p++;
                if ((unsigned char)(c1 - '0') <= 9)
                {
                    v1 = (unsigned short)(c1 - '0');
                }
                else if ((unsigned char)(c1 - 'A') <= 5)
                {
                    v1 = (unsigned short)(c1 - 'A' + 0x37);
                }
                else if ((unsigned char)(c1 - 'a') <= 5)
                {
                    v1 = (unsigned short)(c1 - 'a' + 0x57);
                }
                else
                {
                    v1 = -1;
                }

                p++;
                {
                    unsigned char c2 = (unsigned char)*p;
                    int v2;
                    v1 <<= 4;
                    if ((unsigned char)(c2 - '0') <= 9)
                    {
                        v2 = (unsigned short)(c2 - '0');
                    }
                    else if ((unsigned char)(c2 - 'A') <= 5)
                    {
                        v2 = (unsigned short)(c2 - 'A' + 0x37);
                    }
                    else if ((unsigned char)(c2 - 'a') <= 5)
                    {
                        v2 = (unsigned short)(c2 - 'a' + 0x57);
                    }
                    else
                    {
                        v2 = -1;
                    }
                    *out = (char)(v1 + v2);
                }
            }
        }
        else
        {
            *out = *p;
        }
        out++;

    advance:
        {
            unsigned char nc = (unsigned char)p[1];
            p++;
            i++;
            if (nc != 0)
            {
                continue;
            }
        }
        break;
    }

    if (ok)
    {
        goto done;
    }

finish:
    if (i < cch)
    {
        *out = 0;
    }

done:
    if (pOutLen != 0)
    {
        *pOutLen = i + 1;
    }
    i++;
    if (i > cch)
    {
        ok = 0;
    }
    return ok;
}
