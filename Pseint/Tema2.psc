Algoritmo PartiditoPUNTOStema2
	Definir equipo1,equipo2,equipoActual,punto,puntaje1,puntaje2,simples,dobles,triples Como Entero
	Definir porcentajeSimples,porcentajeDobles,porcentajeTriples Como Real
	equipo1 <- 0
	equipo2 <- 0
	puntaje1 <- 0
	puntaje2 <- 0
	simples <- 0
	dobles <- 0
	triples <- 0
	Repetir
		Escribir 'Ingrese el numero de equipo (1, 2) (0 para terminar):'
		Leer equipoActual
		Si equipoActual<>0 Entonces
			Si equipoActual=1 O equipoActual=2 Entonces
				Escribir 'Ingrese el valor del punto. Debe ser 1, 2 o 3: '
				Leer punto
				Si punto=1 O punto=2 O punto=3 Entonces
					Si punto=1 Entonces
						puntaje1 <- puntaje1+1
						simples <- simples+1
					FinSi
					Si punto=2 Entonces
						puntaje2 <- puntaje2+1
						dobles <- dobles+1
					FinSi
					Si punto=3 Entonces
						puntaje2 <- puntaje2+1
						triples <- triples+1
					FinSi
					Si equipoActual=1 Entonces
						equipo1 <- equipo1+punto
					SiNo
						equipo2 <- equipo2+punto
					FinSi
					Escribir 'Puntos del Equipo 1: ',equipo1
					Escribir 'Puntos del Equipo 2: ',equipo2
					Si equipo1>equipo2 Entonces
						Escribir 'El Equipo 1 está ganando.'
					SiNo
						Si equipo2>equipo1 Entonces
							Escribir 'El Equipo 2 está ganando.'
						SiNo
							Escribir 'El partido está empatado.'
						FinSi
					FinSi
					Escribir 'Tiros simples: ',simples
					Escribir 'Tiros dobles: ',dobles
					Escribir 'Tiros triples: ',triples
					porcentajeSimples <- (simples*100)/(simples+dobles+triples)
					porcentajeDobles <- (dobles*100)/(simples+dobles+triples)
					porcentajeTriples <- (triples*100)/(simples+dobles+triples)
					Escribir 'Porcentaje de tiros simples: ',porcentajeSimples,'%'
					Escribir 'Porcentaje de tiros dobles: ',porcentajeDobles,'%'
					Escribir 'Porcentaje de tiros triples: ',porcentajeTriples,'%'
					Escribir '---------------------------'
				SiNo
					Escribir 'Error: El valor de punto ingresado es incorrecto, vuelva a intentar.'
				FinSi
			SiNo
				Escribir 'Error: El valor de equipo ingresado es incorrecto. Es 1 o 2.'
			FinSi
		FinSi
	Hasta Que equipoActual=0
	Escribir 'Equipo 1: ',equipo1
	Escribir 'Equipo 2: ',equipo2
	Si equipo1>equipo2 Entonces
		Escribir 'Gana equipo 1.'
	SiNo
		Si equipo2>equipo1 Entonces
			Escribir 'Gana el equipo 2.'
		SiNo
			Escribir 'Empate.'
		FinSi
	FinSi
FinAlgoritmo
