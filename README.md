# DIANA CryptoSystem
Implementazione dell'algoritmo di crittografia DIANA (One Time Pad)

```
-----------------------------------------------------------------------------
A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z
-----------------------------------------------------------------------------
Az Ay Ax Aw Av Au At As Ar Aq Ap Ao An Am Al Ak Aj Ai Ah Ag Af Ae Ad Ac Ab Aa
By Bx Bw Bv Bu Bt Bs Br Bq Bp Bo Bn Bm Bl Bk Bj Bi Bh Bg Bf Be Bd Bc Bb Ba Bz
Cx Cw Cv Cu Ct Cs Cr Cq Cp Co Cn Cm Cl Ck Cj Ci Ch Cg Cf Ce Cd Cc Cb Ca Cz Cy
Dw Dv Du Dt Ds Dr Dq Dp Do Dn Dm Dl Dk Dj Di Dh Dg Df De Dd Dc Db Da Dz Dy Dx
Ev Eu Et Es Er Eq Ep Eo En Em El Ek Ej Ei Eh Eg Ef Ee Ed Ec Eb Ea Ez Ey Ex Ew
Fu Ft Fs Fr Fq Fp Fo Fn Fm Fl Fk Fj Fi Fh Fg Ff Fe Fd Fc Fb Fa Fz Fy Fx Fw Fv
Gt Gs Gr Gq Gp Go Gn Gm Gl Gk Gj Gi Gh Gg Gf Ge Gd Gc Gb Ga Gz Gy Gx Gw Gv Gu
Hs Hr Hq Hp Ho Hn Hm Hl Hk Hj Hi Hh Hg Hf He Hd Hc Hb Ha Hz Hy Hx Hw Hv Hu Ht
Ir Iq Ip Io In Im Il Ik Ij Ii Ih Ig If Ie Id Ic Ib Ia Iz Iy Ix Iw Iv Iu It Is
Jq Jp Jo Jn Jm Jl Jk Jj Ji Jh Jg Jf Je Jd Jc Jb Ja Jz Jy Jx Jw Jv Ju Jt Js Jr
Kp Ko Kn Km Kl Kk Kj Ki Kh Kg Kf Ke Kd Kc Kb Ka Kz Ky Kx Kw Kv Ku Kt Ks Kr Kq
Lo Ln Lm Ll Lk Lj Li Lh Lg Lf Le Ld Lc Lb La Lz Ly Lx Lw Lv Lu Lt Ls Lr Lq Lp
Mn Mm Ml Mk Mj Mi Mh Mg Mf Me Md Mc Mb Ma Mz My Mx Mw Mv Mu Mt Ms Mr Mq Mp Mo
Nm Nl Nk Nj Ni Nh Ng Nf Ne Nd Nc Nb Na Nz Ny Nx Nw Nv Nu Nt Ns Nr Nq Np No Nn
Ol Ok Oj Oi Oh Og Of Oe Od Oc Ob Oa Oz Oy Ox Ow Ov Ou Ot Os Or Oq Op Oo On Om
Pk Pj Pi Ph Pg Pf Pe Pd Pc Pb Pa Pz Py Px Pw Pv Pu Pt Ps Pr Pq Pp Po Pn Pm Pl
Qj Qi Qh Qg Qf Qe Qd Qc Qb Qa Qz Qy Qx Qw Qv Qu Qt Qs Qr Qq Qp Qo Qn Qm Ql Qk
Ri Rh Rg Rf Re Rd Rc Rb Ra Rz Ry Rx Rw Rv Ru Rt Rs Rr Rq Rp Ro Rn Rm Rl Rk Rj
Sh Sg Sf Se Sd Sc Sb Sa Sz Sy Sx Sw Sv Su St Ss Sr Sq Sp So Sn Sm Sl Sk Sj Si
Tg Tf Te Td Tc Tb Ta Tz Ty Tx Tw Tv Tu Tt Ts Tr Tq Tp To Tn Tm Tl Tk Tj Ti Th
Uf Ue Ud Uc Ub Ua Uz Uy Ux Uw Uv Uu Ut Us Ur Uq Up Uo Un Um Ul Uk Uj Ui Uh Ug
Ve Vd Vc Vb Va Vz Vy Vx Vw Vv Vu Vt Vs Vr Vq Vp Vo Vn Vm Vl Vk Vj Vi Vh Vg Vf
Wd Wc Wb Wa Wz Wy Wx Ww Wv Wu Wt Ws Wr Wq Wp Wo Wn Wm Wl Wk Wj Wi Wh Wg Wf We
Xc Xb Xa Xz Xy Xx Xw Xv Xu Xt Xs Xr Xq Xp Xo Xn Xm Xl Xk Xj Xi Xh Xg Xf Xe Xd
Yb Ya Yz Yy Yx Yw Yv Yu Yt Ys Yr Yq Yp Yo Yn Ym Yl Yk Yj Yi Yh Yg Yf Ye Yd Yc
Za Zz Zy Zx Zw Zv Zu Zt Zs Zr Zq Zp Zo Zn Zm Zl Zk Zj Zi Zh Zg Zf Ze Zd Zc Zb
-----------------------------------------------------------------------------
```


# Funzionamento
**Sintassi:** ```DianaCryptoSystem.exe "testo" "chiave" encrypt/decrypt```

**Encrypt:**
- **Testo:** PROVATESTO
- **Chiave:**  VCIWIUFEWB
- **Sintassi:** ```DianaCryptoSystem.exe "PROVATESTO" "VCIWIUFEWB" encrypt```
- **Output:** Encrypted Message: PGDIRMQDKK

**Decrypt:**
- **Testo cifrato:** PGDIRMQDKK
- **Chiave:**  VCIWIUFEWB
- **Sintassi:** ```DianaCryptoSystem.exe "PGDIRMQDKK" "VCIWIUFEWB" decrypt```
- **Output:** Decrypted Message: PROVATESTO

# Utilizzo corretto
- La chiave deve essere **totalmente random** (ripetizioni di parti della chiave non ammesse!)
- **LA CHIAVE NON DEVE MAI ESSERE RIUTILIZZATA** (Consigliato distruggere la porzione utilizzata)
- Prestare attenzione a tutti gli strumenti (informatici e non) utilizzati durante la procedura (fogli di carta ecc.)
- È consigliato suddividere il testo (sia esso in chiaro o cifrato) in blocchi da 5 caratteri (Es: PGDIR MQDKK, PROVA TESTO)
- **Non utilizzare Numeri o caratteri speciali (spazi inclusi)**


# Disclaimer
Tale implementazione è a puro scopo di divertimento, non deve essere presa in considerazione come punto di riferimento.

Non mi assumo nessuna responsabilità di eventuali danni provocati da questo codice o da suoi possibili usi impropri.

# Sitografia
- http://www.crittologia.eu/en/critto/cifraDIANA.html
- https://ciphermachinesandcryptology.com/en/onetimepad.htm
- https://en.wikipedia.org/wiki/One-time_pad
- https://ciphermachinesandcryptology.com/papers/one_time_pad.pdf
