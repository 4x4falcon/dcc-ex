/*
 * myClever.h
 */

//... Move the CLEVER calls list to myClever.h
// CLEVER( Turnout, Button, route_ind_close, route_ind_throw )

#ifdef TWO_PIN_MIMIC

CLEVER(id, Button, route_ind_close, route_ind_throw)
#endif


#ifdef ONE_PIN_MIMIC
CLEVER(id, Button, route_ind)
#endif


