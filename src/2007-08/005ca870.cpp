// from server: 40% by colin
extern "C" void* __stdcall memchr(const void*, int, unsigned int);

int __fastcall sub_005ca870(int a, int b, int c, int d, int e)
{
    int v5 = a;
    int v6 = b;
    int v7 = c;
    int v8 = d;
    int v9 = e;

    if (v5 == 0)
        return 0;

    if (v5 > v7)
        return 0;

    v5 -= 1;
    v7 -= v5;

    if (v7 == 0)
        return 0;

    for (;;)
    {
        int v10 = v8;
        int v11 = v9;
        int v12 = v6;

        int v13 = *(signed char*)v10;
        void* v14 = memchr((void*)v12, v13, v11);
        if (v14 == 0)
            return 0;

        int v15 = (int)v14 + 1;
        int v16 = v5;
        int v17 = v10 + 1;
        int v18 = v15;

        if (v16 >= 4)
        {
            do
            {
                int v19 = *(int*)v18;
                if (v19 != *(int*)v17)
                    break;
                v16 -= 4;
                v17 += 4;
                v18 += 4;
            } while (v16 >= 4);
        }

        if (v16 != 0)
        {
            int v20 = *(unsigned char*)v17;
            int v21 = *(unsigned char*)v18;
            int v22 = v21 - v20;
            if (v22 != 0)
            {
                int v23;
                if (v22 > 0)
                    v23 = 1;
                else
                    v23 = -1;
                if (v23 != 0)
                {
                    int v24 = v9 - v15;
                    v8 += v24;
                    v9 = v15;
                    if (v24 != 0)
                        continue;
                    return 0;
                }
            }
            else
            {
                v16 -= 1;
                v17 += 1;
                v18 += 1;
                if (v16 != 0)
                {
                    v20 = *(unsigned char*)v17;
                    v21 = *(unsigned char*)v18;
                    v22 = v21 - v20;
                    if (v22 != 0)
                    {
                        int v23;
                        if (v22 > 0)
                            v23 = 1;
                        else
                            v23 = -1;
                        if (v23 != 0)
                        {
                            int v24 = v9 - v15;
                            v8 += v24;
                            v9 = v15;
                            if (v24 != 0)
                                continue;
                            return 0;
                        }
                    }
                    else
                    {
                        v16 -= 1;
                        v17 += 1;
                        v18 += 1;
                        if (v16 != 0)
                        {
                            v20 = *(unsigned char*)v17;
                            v21 = *(unsigned char*)v18;
                            v22 = v21 - v20;
                            if (v22 != 0)
                            {
                                int v23;
                                if (v22 > 0)
                                    v23 = 1;
                                else
                                    v23 = -1;
                                if (v23 != 0)
                                {
                                    int v24 = v9 - v15;
                                    v8 += v24;
                                    v9 = v15;
                                    if (v24 != 0)
                                        continue;
                                    return 0;
                                }
                            }
                            else
                            {
                                v16 -= 1;
                                v17 += 1;
                                v18 += 1;
                                if (v16 != 0)
                                {
                                    v20 = *(unsigned char*)v17;
                                    v21 = *(unsigned char*)v18;
                                    v22 = v21 - v20;
                                    if (v22 != 0)
                                    {
                                        int v23;
                                        if (v22 > 0)
                                            v23 = 1;
                                        else
                                            v23 = -1;
                                        if (v23 != 0)
                                        {
                                            int v24 = v9 - v15;
                                            v8 += v24;
                                            v9 = v15;
                                            if (v24 != 0)
                                                continue;
                                            return 0;
                                        }
                                    }
                                    else
                                    {
                                        int v24 = v9 - v15;
                                        v8 += v24;
                                        v9 = v15;
                                        if (v24 != 0)
                                            continue;
                                        return 0;
                                    }
                                }
                                else
                                {
                                    return v15 - 1;
                                }
                            }
                        }
                        else
                        {
                            return v15 - 1;
                        }
                    }
                }
                else
                {
                    return v15 - 1;
                }
            }
        }
        else
        {
            return v15 - 1;
        }
    }
}
