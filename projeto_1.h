/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PROJETO_1_H_RPCGEN
#define _PROJETO_1_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct vetor {
	double array[500];
};
typedef struct vetor vetor;

struct maior_menor {
	double maior_menor[2];
};
typedef struct maior_menor maior_menor;

#define projeto_1 500
#define projeto_1 43

#if defined(__STDC__) || defined(__cplusplus)
#define compara 1
extern  maior_menor * compara_43(vetor *, CLIENT *);
extern  maior_menor * compara_43_svc(vetor *, struct svc_req *);
extern int projeto_1_43_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define compara 1
extern  maior_menor * compara_43();
extern  maior_menor * compara_43_svc();
extern int projeto_1_43_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_vetor (XDR *, vetor*);
extern  bool_t xdr_maior_menor (XDR *, maior_menor*);

#else /* K&R C */
extern bool_t xdr_vetor ();
extern bool_t xdr_maior_menor ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PROJETO_1_H_RPCGEN */
